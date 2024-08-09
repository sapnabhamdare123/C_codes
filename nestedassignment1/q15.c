/*
5 4 3 2 1 
4 3 2 1
3 2 1 
2 1 
1
*/
#include<stdio.h>
int main()
	{
	int n,i,p;
	printf("enter the number n");
	scanf("%d",&n);
	for(i=n; i>0; i--)
	{
		for(p=i; p>0; p--)
		{
		printf("%d ",p);
		}
	printf("\n");
	}
	return 0;
	}

