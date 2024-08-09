/*
1 3 5 7 9
3 5 7 9
5 7 9
7 9
9
*/
#include<stdio.h>
int main ()
{
int n,i,k=1,p=1,j;
printf("enter the number n");
scanf("%d",&n);
for(i=n; i>0; i--)
{
	for(j=1; j<=i; j++)
	{
		printf("%d ",p);
		p=p+2;
	}
	k=k+2;
	p=k;
	printf("\n");
	}
	return 0;
	}
	
	
