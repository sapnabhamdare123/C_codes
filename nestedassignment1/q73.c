//fibonacci number dimand
#include<stdio.h>
int main()
{
int n,i;
printf("enter the number n");
scanf("%d",&n);
int a=0,b=1,c=0;
for(int i=n; i>=1; i--)
{	
	for(int j=1; j<=i; j++)
	{
		printf("%d ",a );
		c=a+b;
		a=b;
		b=c;
	}
}
printf("\n");
int z=5,y=3;
for(int i=(i-2); i>0; i--);
{
	for(int j=1; j<=i; j++)
	{
		printf("%d",z);
		c=z-y;
		z=y;
		y=c;
	}
}
return 0;
}
