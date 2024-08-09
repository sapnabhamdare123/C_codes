/*
0
2 4
4 8 8
8 16 16 16
16 32 32 32 32
32 64 64 64 64 64
*/
#include<stdio.h>
int main()
	{
	int i,j,c,n;
	printf("enter the number n");
	scanf("%d",&n);
	j=0;
	printf("%d\n",j);
	j=2;
	for(i=1; i<=n; i++)
	{
		printf("%d ",j);
		j=j*2;
		for(c=1; c<=i; c++)
		{
			printf("%d ",j);
		}
		i=i*1;
		printf("\n");
	}
	return 0;
	}
	
	
