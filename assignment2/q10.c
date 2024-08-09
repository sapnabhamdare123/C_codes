//construct a flowchart to check whether a number is divisible by 7 or not.
#include<stdio.h>
int main()
	{
	int n;
	printf("enter the number n");
	scanf("%d",&n);
	if(n%7==0)
	{
		printf("n is divisible by 7");
	}
	else
	{
		printf("n is not divisible by 7");
	}
	return 0;
	}

