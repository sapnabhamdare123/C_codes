//construct a flowchart to find max.
#include<stdio.h>
int main()
{
int n, max=0,i,a;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	printf("enter the number a");
	scanf("%d",&a);	
	if(a>max)
	{
		max=a;
	}
	printf("%d",max);
	}
	return 0;
	
	}
	

