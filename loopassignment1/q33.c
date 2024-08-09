//write a program to find the sum of following series 1+8+27-----n terms.
#include<stdio.h>
int main()
{
int n,a,i,s=0;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	a=i*i*i;
	s=s+a;
}
printf("%d",s);
return 0;
}
