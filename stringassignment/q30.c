#include <stdio.h>
#include <string.h>
int main() 
{
    int t;
    scanf("%d",&t);
    while(t--) 
    {
        int n,s;
        scanf("%d %d",&n,&s);
        char str[n];
        scanf(" %[^\n]s", str); // Notice the space before %[^\n]s
        int size = 0;
        int i = 0;
        int temp=1;
        while(str[i]!='\0') 
        {
            char c=str[i];
            if(c=='a' || c=='e'||c=='i' || c=='o' || c=='u') 
            {
                size=0;
            } 
            else 
            {
                size++;
                if(size>=4) 
                {
                    temp=0; 
                    break;
                }
            }
            i++;
        }
        if (temp==1) 
        {
            printf("YES\n");
        } 
        else 
        {
            printf("NO\n");
        }
    }

    return 0;
}

