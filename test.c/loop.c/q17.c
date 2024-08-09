// write a program in c to print the fibonacci series using iteration.
#include<stdio.h>
int main()
{
	int n,i;
	int a=0;
	int b=1;
	int z=0;
	printf("enter the number n");
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		printf("%d ",z);
		a=b;
		b=z;
		z=a+b;
	}
return 0;
}
