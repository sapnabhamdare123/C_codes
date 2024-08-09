//write a program to print the first 10 natural number in reverse order.
#include<stdio.h>
int main()
{
int n,i;
printf("enter the number n");
scanf("%d",&n);
for(i=n; i>0; i--)
{
	printf("%d\n",i);
}
return 0;
}
