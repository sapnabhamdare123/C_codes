/*
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/
#include<stdio.h>
int main()
{
int n,i,j,p;
printf("enter the number n");
scanf("%d",&n);
printf("1\n");
for(i=2; i<=n; i++)
{
	for(j=1; j<=i; j++)
	{
		printf("%d ",j);
	}
     	p=i;
     	for(p=p-1; p>0; p--)
     	{
     		printf("%d ",p);
     	}
     	printf("\n");
     	}
     	return 0;
     	}
	
