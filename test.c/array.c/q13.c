//selection sort 
#include<stdio.h>
int main()
{
int n,temp,min,j;
printf("enter the number n :");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
for(int i=0; i<n-1; i++)
{
	min=i;
	for(int j=i+1; j<n; j++)
	{
		if(arr[j]<arr[min])
		{
			min=j;
		}
	}	
		if(min!= i)	
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
printf("sorted array :");
for(int p=0; p<n; p++)
{
	printf("%d ",arr[p]);
}
return 0;
}
	
		
		
