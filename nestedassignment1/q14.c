/*
1
3 3
5 5 5 
7 7 7 7
9 9 9 9 9
*/
#include<stdio.h>
int main()
{
int n, i,p=1,k;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	for(k=1; k<=i; k++)
	{
		printf("%d ",p);
	}
p=p+2;
printf("\n");
}
return 0;
}
