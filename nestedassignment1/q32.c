/*
---*
--* *
-* * *
* * * *
-* * *
--* *
---*
*/
#include<stdio.h>
int main()
{
int i,j,s,n;
printf("enter the number n");
scanf("%d",&n);
for(i=i; i<=n; i++)
{
	for(s=i; s<n ; s++)
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
		return 0;
		}
	
	
