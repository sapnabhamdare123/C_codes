//rearrengement array
#include<stdio.h>
int main()
{
int n,temp;
printf("enter the number n:");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
for(int i=n-2; i>=0; i--)
{
	for(int j=0; j<=i; j++)
	{
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
for(int i=0; i<n; i++)
{
	printf("%d ",arr[i]);
}
return 0;
}
