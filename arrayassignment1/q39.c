//given an unsorted array of size n that contains only non-negative find a contlguous subarray that adds  to a given numbers s in case of multiple subarrays return the subarray which come first on moving from left to right let us say the array is 3,6,7,5,10 and the given array value of s =12 the out put should be 7,5#include<stdio.h>
int main()
{
int n;
printf("enter the number n:");
scanf("%d",&n);
int arr[n];
int i,sum=0,j,s;
for(i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
printf("enter the number of s:");
scanf("%d",&s);
for(i=0; i<n; i++)
{
	for(j=i+1; j<n; j++)
	{
		sum=arr[i]+arr[j];
		if(sum==s)
		{
			printf("%d %d ",arr[i],arr[j]);
		}
	}
}
return 0;
}
		

