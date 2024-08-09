//kuch bhi
#include<stdio.h>
int main()
{
int n,a,b;
//printf("enter the number n :");
//scanf("%d",&n);
//for(int i=0; i<=n; i++);
//{
	printf("enter the number a :");
	scanf("%d",&a);
	if(a==1)
	{
		printf("start\n");
	}
	else if(a==0)
	{
		printf("stop\n");
	}
	else if(a!=1 || a!=0)
	{
		printf("chrash\n");
	}
	scanf("%d",&b);
if(b==1)
{
	printf("all ready start\n");
}
else if(b==0)
{
	printf("all ready stop\n");
}
return 0;
}

