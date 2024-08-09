// write a program to print all the characters in the string computer using while loop.
#include<stdio.h>
int main()
{
int n,i,s=0,f=1;
printf("enter the number n");
scanf("%d",&n);
for(i=0; i<=n; i++)
{
	f=f*i;
	s=s+1/f;
	printf("%d",s);
}
return 0;
}
