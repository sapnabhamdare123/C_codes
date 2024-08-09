/*
4 5 4 3 2
3 4 5 4 3
2 3 4 5 4
1 2 3 4 5
*/ 
#include<stdio.h>
int main()
{
int n,p,k,j,i;
printf("enter the number n");
scanf("%d",&n);
i=n; 
p=1;
k=(n-2);
while(p<=n)
{
	for(j=i; j<=n+1; j++)
	{
		printf("%d",j);
	}
	j=j-2;
	if(j>=k)
	{
		printf("%d",j);
		j=j-1;
	}
	i=i-1;
	k=k+1;
	p=p+1;
	printf("\n");
	}
	return 0;
	}


