//bubble sort array 
#include<stdio.h>
int main()
{
int temp,i,j;
int arr[5] = {7,12,3,18,5};
for(int i=3; i>=0; i--)
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
for(int i=0; i<5; i++)
{
	printf("%d ",arr[i]);
}
return 0;
}		
			
			
			
			
			
			
			
			
