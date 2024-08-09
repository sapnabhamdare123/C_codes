// conut the number of elements in given array garater than a given x.
#include<stdio.h>
int main()
{
int arr[7] = {1,2,3,4,5,6,7};
int x=4;
int c=0;
for(int i=0; i<7; i++)
{
	if(x<arr[i])
	{
		c=c+arr[i];
	}
}
printf("%d",c);
return 0;
}
	

