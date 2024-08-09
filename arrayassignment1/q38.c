// take a two sorted arrays from the user as a input and merge them into a singlesorted array.
#include<stdio.h>
int main()
{
int a[4] = {1,4,7,9};
int b[4] = {2,3,6,8};
int arr[8];
int i,j=0,p=0,s;
	for(i=0; i<7; i++)
	{
		if(a[j]>b[p])
		{
			arr[i]=b[p];
			p=p+1;
		}	
		else 
		{
			arr[i]=a[j];
			j=j+1;
		}
	}
	for(s=0; s<7; s++)
	{
	printf("%d ",arr[s]);
	}
	if(j < b[4])
	{
	printf("%d ",arr[s]=a[j]);
	}
	printf("%d ",arr[s]=a[j]);
	return 0;
	}

