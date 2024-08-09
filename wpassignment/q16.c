//secound max.
#include<stdio.h>
int main()
{
int n, max=0 ,i,smax=0,a;
printf("enter the number of elements (n):");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	printf("enter the number %d: ",i);
	scanf("%d",&a);
	if(a>max)
	{
		smax=max;
		max=a;
	}else if(a>smax)
	{
		smax=a;
	}
	printf("smax=%d\n",smax);
	}
	return 0;
	}
	
