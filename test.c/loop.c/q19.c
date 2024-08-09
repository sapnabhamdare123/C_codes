// write a proogram in c find greatest three integers.
#include<stdio.h>
int main()
{
	int n;
	int max=0;
	int smax=0;
	int tmax=0;
	printf("enter the number n: ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		int a;
		printf("enter the number a");
		scanf("%d",&a);
		if(a>max)
		{
			tmax=smax;
			smax=max;
			max=a;
		}
		else if(a>smax)
		{
			tmax=smax;
			smax=a;
		}
		else if (a>tmax)
		{
			tmax=a;
		}
	}
	printf("%d %d %d",max,smax,tmax);
return 0;
}
			
