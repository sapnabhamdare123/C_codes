/*
10
10 8
10 8 6
10 8 6 4
10 8 6 4 2
*/
#include<stdio.h>
int main()
{
int n,j,i,p=10;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	for(j=1; j<=i; j++)
	{
		printf("%d ",p);
		p=p-2;
	}
	p=10;
	printf("\n");
	}
	return 0;
	}
