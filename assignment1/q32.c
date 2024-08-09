//write a program to take two numbers a and b as input from the user and print the number closest to (but less than)A wich is competeely divisble by B for example A=23 B=7
#include <stdio.h>
int main()
{
int a,b,c,d;
printf("enter the number a b");
scanf("%d %d",&a,&b);
c=a/b;
d=c*b;
printf("%d",d);
return 0;
}
