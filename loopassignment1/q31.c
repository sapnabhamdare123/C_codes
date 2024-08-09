//write a program to print the fibanacci series till n terms.
#include<stdio.h>
int main()
{
int n,i,a=0,b=1,z=0;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	printf("%d ",z);
	a=b; 
	b=z;
	z=a+b;
}
return 0;
}
