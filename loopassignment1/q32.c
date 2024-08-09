// write a program to print the factorial of a number accepted by the user .
#include<stdio.h>
int main()
{
int n,f=1,s=1;
printf("enter the number n");
scanf("%d",&n);
while(0<n)
{
	f=f*n;
	s=f*1;
	n=n-1;
}
printf("%d",s);
return 0;
}
