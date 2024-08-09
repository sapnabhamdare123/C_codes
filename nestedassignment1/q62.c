/*
*******
*******
*******
********
*
********
*/
#include<stdio.h>
int main()
{
int i,j,n,s;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=3; i++)
{
	for(j=1; j<=n; j++)
	{
		printf("*");
		printf(" ");
	}
	printf("\n");
	}
	for(int f=1; f<=1; f++)
	{
		for(int z=1; z<=n+1; z++)
		{
			printf("*");
			printf(" ");
		}
		printf("\n");
		}
		for(int p=1; p<=1; p++)
		{
			printf("*");
			printf(" ");
		}
		printf("\n");
		for(int a=1; a<=n+1; a++)
		{
			printf("*");
			printf(" ");
		}
		
		return 0;
	}
