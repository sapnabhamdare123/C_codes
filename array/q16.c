// given an array of integers,change the value of all odd  indexed elements to its second multiple and increment all even indexed value by 10 n  number.
#include<stdio.h>
int main()
{
int n,i;
printf("enter the size of array: ");
scanf("%d",&n);
int arr[n];
for(i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
int p,k;
for(int i=0; i<n; i++)
{
	if(i%2==0)
	{
		p=arr[i]+10;
		printf("%d ",p);
	}
	else
	{
		k=arr[i]*2;
		printf("%d ",k);
	}
	}
	return 0;
}


