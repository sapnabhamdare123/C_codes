// find the second max of 3 numbers (use minimum numbers for comparisons.
#include<stdio.h>
int main()
	{
	int a,b,c,max,sum;
	printf("enter the number a,b,c");
	scanf("%d %d %d",&a,&b,&c);
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
		if(c>sum)
		{	
			printf("%d",c);
		}
		
		else
		{
			printf("%d",sum);
		}
		}
	else
	{
		printf("%d",max);
	}
	return 0;
	}
