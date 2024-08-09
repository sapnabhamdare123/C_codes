// swap two numbers without using a third variable
#include<stdio.h>
int main()
{
int a;
printf("enter the number a:");
scanf("%d",&a);
int b;
printf("enter the number b");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d,%d",a,b);
return 0;
}
