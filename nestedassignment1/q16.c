/*
1
2 1
3 2 1 
4 3 2 1 
5 4 3 2 1
*/
#include<stdio.h>
int main()
	{
	int n,i,k;
	printf("enter the number n");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(k=i; k>0; k--)
		{
			printf("%d ",k);
		}
	printf("\n");
	}
	return 0;
	}
