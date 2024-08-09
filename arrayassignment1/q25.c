//unic.
#include<stdio.h>
int main ()
{
int arr[8] = {9,2,3,4,4,5,5,6};
int k,j,c,i;
for(int i=0; i<8; i++)
{
	k=arr[i];
	j=i+1;
	c=0;
	if(j<7)
	{
		if(arr[j]==k)
		{
		c=c+1;
		j=j+1;
		}
	}
	if(c==1)
	{
		printf("%d ",arr[i]);
	}
}
return 0;
}
	
