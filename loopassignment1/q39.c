// factoria of n numbres

#include<stdio.h>
int main()
{
int n,i,f=1;
printf("enter the number n:");
scanf("%d",&n);
for(i=n; i>0; i--)
{
	f=i*f;
}
printf("%d ",f);
return 0;
}
