//find the difference between the sum of elements at even indices to the sum of elements odd indices.
#include<stdio.h>
int main()
{
int arr[7] = {3,4,2,5,7,1,6};
int sumeven=0;
int sumodd=0;
int sum;
for(int i=0; i<7; i++)
{
	if(i%2==0)
	{
		sumeven=sumeven+arr[i];
	}
	else
	{
		sumodd=sumodd+arr[i];
	}
	sum=sumeven-sumodd;
	}
	printf("%d",sum);
	return 0;
	}
	
