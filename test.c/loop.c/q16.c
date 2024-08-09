// write a program  in c  to check given number is prime or not.
#include<stdio.h>
int main()
{
	int n,sum;
	printf("enter the number n");
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			sum = sum + 1;
		}
	}
	if(sum==2)
	{
		printf("the number is prime");
	}
	else 
	{
		printf("the number is not prime");}
return 0;
}	
