//write a program in c to swap two number using thrid variable.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number a:");
	scanf("%d",&a);
	printf("enter the number b;");
	scanf("%d",&b);
	c = b;
	b = a;
	a = c;
	printf(" a is %d\n",a);
	printf(" b  is %d",b);
return 0;
}
