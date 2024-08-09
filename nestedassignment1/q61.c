/*
* * * * * *
* * * * * *

* * * * * *
* * * * * *
*/
#include<stdio.h>
int main()
{
int i,j,n,s;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=2; i++)
{
		for(j=1; j<=n; j++)
		{
			printf("*");
			printf(" ");
		}
		printf("\n");
		}
		for(s=1; s<=n; s++)
		{
			printf(" ");
			printf(" ");
		}
		printf("\n");
		for(int k=1; k<=2; k++)
		{
			for(int t=1; t<=n; t++)
			{
				printf("*");
				printf(" ");
			}
			printf("\n");
			}
		
		return 0;
		}
			
		

