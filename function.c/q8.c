//swap 2 numbers
#include<stdio.h>
int main()
{
int a;
printf("enter the first number a");
scanf("%d",&a);
int b;
printf("enter the second number b");
scanf("%d",&b);
int temp;
temp = a;
a = b;
b = temp;
printf("%d ,%d",a,b);
return 0;
}

