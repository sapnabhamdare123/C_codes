/*
1 2 3 4 5
2 2 3 4 5
3 3 3 4 5
4 4 4 4 5
5 5 5 5 5
*/
#include<stdio.h>
int main()
{
int n,j, p,i;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	for(j=1; j<=i; j++)
	{
		printf("%d",i);
	}
	for(p=i+1; p<=n; p++)
	{
		printf("%d",p);
	}
	printf("\n");
	}
	return 0;
	}
