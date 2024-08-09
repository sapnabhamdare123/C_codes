//fibonacci series
#include<stdio.h>
int main()
{
int n;
printf("enter the number n");
scanf("%d",&n);
int s=(n-1),a=0,b=1,c=0;
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
return 0;
}
