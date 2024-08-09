// write a program in c to check whether a number  is palindrome or not using recursion.
#include<stdio.h>
int main()
{
	int n,a,b,c,d,s;
	printf("enter the number");
	scanf("%d",&n);
	for(int i=n; i<=n; i++)
	{
		a=n/100;
		b=n%100;
		c=b/10;
		d=b%10;
		s = a,c,d;
		if(s==n)
		{
			printf("palindrome number\n");
		}
		else 
		{
			printf("not palindrome number");
		}
	}
return 0;
}
