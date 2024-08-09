/*
1
2 4
3 6 9
4 8 12 16
5 10 15 20 25
6 12 18 24 30 36
*/
#include<stdio.h>
int main()
{
int n,i,j,p;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	p=1;
	for(j=1; j<=i; j++)
	{
		printf("%d ",i*p);
		p=p+1;
	}
	printf("\n");
}
return 0;
}
