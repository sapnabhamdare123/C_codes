/*
- - - - 1
- - - 1 2
- - 1 2 3
- 1 2 3 4
1 2 3 4 5
*/
#include<stdio.h>
int main()
{
int n,i,p,s;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
        for (s=1; s<=n-i; s++)
        {
             printf("  ");
        }
	for(p=1; p<=i; p++)
	{
	printf(" ");
	printf("%d",p);
	}
printf("\n");
}
return 0;
}	
