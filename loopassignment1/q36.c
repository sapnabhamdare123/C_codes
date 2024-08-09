//write a program to sum the sequence.
#include <stdio.h>
int main()
{
int n,k=1,s=1,a,i;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	a=1/i;
	s=s+a;
}
printf("%d",s);
return 0;
}
