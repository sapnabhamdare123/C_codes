//inserstion sort
#include<stdio.h>
int main()
{
int i,n;
scanf("%d",&n);
int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int j;
	for(i=0;i<n;i++)
	{
		int temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;}
		printf("Insertion sort:");
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		return 0;
		}
