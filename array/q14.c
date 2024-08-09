// find the minimum value out of all the elements in the array.
#include<stdio.h>
int main()
{
int arr[7] = {4,5,34,23,1,54,2};
int min = arr[0];
for(int i=0; i<7; i++)
{
	if(min>arr[i])
	{
		min=arr[i];
	}
	}
	printf("%d",min);
return 0;
}
