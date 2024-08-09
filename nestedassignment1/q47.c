/*
*******
*** ***
**   **
*     *
*/
#include<stdio.h>
int main()
{
int i,j,n,m,s=0,h,k;
printf("enter the number n");
scanf("%d",&n);
m=1;
for(i=n; i>0; i--)
{
j=n;
	for(j=n; j>=m; j--)
	{
		printf("*");
	}
	for(k=1; k<=s; k++)
	{
		printf(" ");
	}
	s=s+2;
	for(j=m; j<=n; j++)
		{
			printf("*");
		}
		m=m+1;
		
	printf("\n");
	}
	return 0;
	}
