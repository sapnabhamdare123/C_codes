// write a program in  c to swap two numbers without using third variable.
#include<stdio.h>
int main()
{
	int a,b;
	printf("\nenter the number a:");
	scanf("%d",&a);
	printf("enter the number b");
	scanf("%d",&b);
	{
		a=a+b;
		b=a-b;
		a=a-b;
		printf("a is %d\n b is %d\n",a,b);
	}
return 0;
}
