// write a program to find duplicate element from a given array of intagers.
#include<stdio.h>
int main()
{
int arr[8] = {1,2,3,4,3,5,4,9};
for(int i=0; i<7; i++)
{
	for(int j=i+1; j<8; j++)
	{
		if(arr[i]==arr[j])
		{
			printf("%d is the duplicate elements ",arr[i]);
			break;
		}
		}
		}
		return 0;
		}
