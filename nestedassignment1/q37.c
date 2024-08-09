/*
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
*/
#include<stdio.h>
int main()
{
int n,i,p=1,j;
printf("enter the number n");
scanf("%d",&n);
for(i=n; i>0; i--)
{
	for(j=p; j<=n; j++)
	{
		printf("%d ",j);
	}
	p=p+1;
	printf("\n");
	}
	return 0;
	}
	
