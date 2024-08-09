//construct a flowchart to show thred maxx,
#include<stdio.h>
int main()
{
int max=0,smax=0,tmax=0,i,n,a;
printf("enter the number of elements (n):");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	printf("enter the number %d: ",i);
	scanf("%d",&a);
	if(a>max)
	{
		tmax=smax;
		smax=max;
		max=a;
	}else if(a>smax)
	{
		tmax=smax;
		smax=max;
	}else if(a>tmax)
	{
		tmax=a;
	}
	printf("tmax=%d\n",tmax);
	}
	return 0;
	}
	
		
	

