//rotade the given array a by k steps ,where k is non negative.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number n :");
	scanf("%d",&n);
	int arr[n];
	int k=1;
	int z=k+1;
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	int arr2[n];
	for(int j=0,i=n-1; j<n; j++, i--)
	{       
  	 	arr2[j]=arr[i];
	}
	for(int i=0; i<n; i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
	for(int i=k; k>=0; k--)
	{
		printf("%d ",arr2[k]);

	}
	//printf("\n");
	for(int p=0; p<n-z; p++)
	{
		printf("%d ",arr[p]);
	}
	return 0;
	}
	
	
	
	
	
	
	
