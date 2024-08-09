/*
0 1 2 3 4 5
0 1 2 3 4
0 1 2 3
0 1 2
0 1
*/
#include<stdio.h>
int main()
{
int n,i,p;
printf("enter the number n");
scanf("%d",&n);
for(i=n; i>0; i--)
{
	for(p=0; p<=i; p++)
	{
		printf("%d ",p);
	}
	printf("\n");
}
return 0;
}
