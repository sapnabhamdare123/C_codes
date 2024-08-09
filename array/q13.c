// find the maximum value out of all the elements in the array.
#include<stdio.h>
int main()
{
int arr[8] = {9,2,11,13,3,40,8,7};
int max = arr[0];
for(int i=0; i<8; i++)
{
	if(max<arr[i])
	{
		max = arr[i];
	}
}
	printf("%d ",max);
return 0;
}
		
	

