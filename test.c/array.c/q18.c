//index found last value
#include <stdio.h>
int main() 
{
    int n,mid,j,p;
    printf("Enter the number n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    } 
    int key;
    printf("Enter the key value: ");
    scanf("%d",&key);
    j=0;
    p=n-1;
    int last=-1;
    while (j <= p) 
    {
        mid=(j+p)/2;
        if(key==arr[mid])
         {
            last=mid;
            j=mid+1; 
        }
         else if(key>arr[mid]) 
         {
            j=mid+1;
        } 
        else 
        {
            p=mid-1;
        }
    }
    if (last!=-1)
     {
       printf("%d",last);
    } 
    else
    {
    	printf("key not found in array");
    	}
    return 0;
}

	
