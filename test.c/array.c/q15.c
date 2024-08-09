//bubble sort.
#include<stdio.h>
int main()
{
	int n,temp;
	printf("enter the number n : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		printf("enter the number :");
		scanf("%d",&arr[i]);
	}
	for(int j=0; j<n; j++)
	{
		for(int p=j+1; p<n; p++)
		{
			if(arr[j]>arr[p])
			{
				temp=arr[j];
				arr[j]=arr[p];
				arr[p]=temp;
			}
		}
	}
	for(int k=0; k<n; k++)
	{
		printf("%d ",arr[k]);
	}
return 0;
}
