/*
1
3 2
6 5 4
10 9 8 7
*/
#include<stdio.h>
int main()
{
int n,i,j=0,d,m,c;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	j=j+i;
	m=j;
	for(c=1; c<=i; c++)
	{
		printf("%d ",m);
		m=m-1;
	}
printf("\n");
}
return 0;
}

