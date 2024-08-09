/*
*------*
**----**
***--***
********
***--***
**----**
*------*
*/
#include<stdio.h>
int main()
{
int n,i,j,s,p,k;
printf("enter the number n");
scanf("%d",&n);
for(i=n; i>0; i--)
{
	for(s=1; s<=n-i; s++)
	{
		printf("*");
	}
	for(j=1; j<=i; j++)
	{
		printf(" ");
		printf(" ");
	}
	for(int p=1; p<=n; p++)
	{
		for(int h=1; h<=n-p; h++)
		{
		if(h==i) printf("*");
			
		}
	}

	printf("\n");
	}
int m=1;
int z=0;
for(i=n; i>0; i--)
{
j=n;
	for(j=n; j>=m; j--)
	{
		printf("*");
	}
	for(k=1; k<=z; k++)
	{
		printf(" ");
	}
	z=z+2;
	for(j=m; j<=n; j++)
		{
			printf("*");
		}
		m=m+1;
		
	printf("\n");
	}
	return 0;
	}

