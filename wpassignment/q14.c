//constrct a flowchart to find max and secound maxx.
#include<stdio.h>
int main()
{
int i ,max=0, smax=1, n,a;
printf("enter the number of elements (n):");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	printf("enter the number %d :", i);
	scanf("%d",&a);
	{
		if(a>max)
		{
			smax=max;
			max=a;
		}else if(a>smax)
		{
			smax=a;
		}
		printf("max=%d\n,max,smax= %d\n",smax);
		}
		}
		return 0;
		}
		                         
