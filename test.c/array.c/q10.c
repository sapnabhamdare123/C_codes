// prime array
#include<stdio.h>
int main()
{
int n,k;
printf("enter the number n : ");
scanf("%d",&n);
int arr[n];
int a[n];
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
for(int j=0; j<n; j++)
{
	int s=0;
	for(int k=0; k<n; k++)
	{
		if(arr[j]%k==0)
		{
			s=s+1;
		}
	}
	if(s==2)
	{
		a[j]=arr[k];
	}
}
for(int i=0; i<n; i++)
{
	printf("%d",arr[i]);
}
return 0;
}
