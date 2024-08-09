//find the secound max of 4 numbers.
#include <stdio.h>
int main()
	{
	int a,b,c,d,max,sum,m,s;
	printf("enter the number a,b,c,d");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b)
	{
		max=a;
		sum=b;
	}
	else
	{
		max=b;
		sum=a;
	}
	if(max>c)
	{
		m=max;
		s=c;
	}
	else
	{
		m=c;
		s=max;
	}
	if(m>d)
	{
		if(d>s)
		{
			printf("%d",d);
		}
		else{
			printf("%d",s);
		}
	}
	else
	{
		printf("%d",m);
	}
	return 0;
	}
