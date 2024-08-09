/*
****0****
***000***
**00000**
*0000000*
000000000
*/
#include<stdio.h>
int main()
{
int n,i,j,k;
printf("enter the number n");
scanf("%d",&n);
int m=1;
int z=0;
for(i=n; i>0; i--)
{
	for(j=n; j>=m; j--)
	{
		printf("*");
	}
	for(k=1; k<=z; k++)
	{
		printf("0");
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

		
