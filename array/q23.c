// find the unique number in a given array where all the elements are being repeated twice with one value being unique.
#include<stdio.h>
int main()
{
int arr[7] = {2,4,3,5,2,3,5};
for(int i=0; i<7; i++)
{
	 bool flag = false;
	for(int j=i+1; j<7; j++)
	{
		if(arr[i]==arr[j])
		{
			flag = true;
		}
		
	}
	if(flag ==false)
	{
		printf("%d",arr[i]);
		break;
	}
}
return 0;
}
