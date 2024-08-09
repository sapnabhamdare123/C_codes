/*
* * * * * 
-* * * *
--* * *
   * *
    *
    *
   * *
  * * *
 * * * *
* * * * * 
*/
#include<stdio.h>
int main()
{
int i,n,j,s;
printf("enter the number n");
scanf("%d",&n);
for(i=n; i>0; i--)
{
	for(s=i; s<n; s++)
	{
		printf(" ");
	}
	for(j=1; j<=i; j++)
	{
		printf(" ");
		printf("*");
	}
	printf("\n");
	}
	for(i=1; i<=n; i++)
	{
		for(s=i; s<n; s++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf(" ");
			printf("*");
		}
		printf("\n");
		}
		return 0;
		}
		
