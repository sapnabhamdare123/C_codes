//find the third max of 4 numbers.
#include<stdio.h>
int main()
	{
	int a,b,c,d,max,min,m,mi;
	printf("enter the number a,b,c,d");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b)
	{
		max=a;
		min=b;
	}
	else
	{
		max=b;
		min=a;
	}
	if(c>d)
	{
		m=c;
		mi=d;
	}
	else
	{
		m=d;
		mi=c;
	}
	if(max>m)
	{
		if(m<min)
		{
			printf("%d",min);
		}
		else
		{
			printf("%d",m);
		}
	}
	else if(max>mi)
	{
		printf("%d",mi);
	}
	else
	{
		printf("%d",max);
	}
	return 0;
	}

