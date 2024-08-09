//find the maximum occurring number out of the given five numbers.
#include<stdio.h>
int main()
	{
	int a,b,c,d,e,max,sum,m,s,mm,ss;
	printf("enter the number a,b,c,d,e");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a>=b)
	{
		max=a;
		sum=b;
	}
	else
	{
		max=b;
		sum=b;
	}
	if(c>=d)
	{
		m=c;
		s=d;
	}
	else
	{
		m=d;
		s=c;
	}
	if(max>=m)
	{
		mm=max;
		ss=m;
	}
	else
	{
		mm=m;
		ss=max;
	}
	if(mm>=e)
	{
		printf("%d",mm);
	}
	else
	{
		printf("%d",e);
	}
	return 0;
	}
		

