/*
0
1 0 1
2 1 0 1 2
3 2 1 0 1 2 3
4 3 2 1 0 1 2 3 4
*/
#include<stdio.h>
int main()
{
int n,i,j;
printf("enter the number n");
scanf("%d",&n);
for(i=0; i<=n; i++)
{
	for(j=i; j<i; j++)
	{
		printf("%d ",j);
	}
	while (j>=0)
	{
		printf("%d ",j);
		j--;
	}
	
	for(j=1; j<=i; j++)
	{
		printf("%d ",j);
	}
	printf("\n");
	}
	return 0;
	}
		
		
