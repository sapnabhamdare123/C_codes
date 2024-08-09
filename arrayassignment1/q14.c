//make a flowchart to print duplicates in a list.
	
#include<stdio.h>
int main()
{
int arr[9] = {1,2,3,4,3,5,4,9,4};
for(int i=0; i<8; i++)
{
	for(int j=i+1; j<9; j++)
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
		
		
		
		
	
		
