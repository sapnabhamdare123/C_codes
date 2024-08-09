//write a program to print the follwing series till n terms 2,22,222,2222.
#include<stdio.h>
int main()
{
int n,i,s=0,p=2;
printf("enter the number n");
scanf("%d",&n);
for( i=1; i<=n; i++)
{
	s=s*10+p;
	printf("%d ",s);
}
return 0;
}
