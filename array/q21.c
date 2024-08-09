// write a program to copy the contents of one array into another in the revere.
#include<stdio.h>
int main()
{
int arr[8] = {1,6,3,42,5,6,7,8};
for(int i=8-1; i>=0; i--)
{
	printf("%d ",arr[i]);
}
	return 0;
	}
