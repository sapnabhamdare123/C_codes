//take an array from the user as input and print the mean median and mode of the array.
#include<stdio.h>
int main()
{
int n;
printf("enter the numbr n:");
scanf("%d",&n);
int arr[n];
int i,s=0,a,j,k,p,median,m;
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
	s=s+arr[i];
}
printf("mean is %d ",s/n);
k=1;
for(j=0; j<n; j++)
{
	for(p=k; p<n; p++)
	{
		if(arr[j]==arr[p])
		{
			printf("mode is %d ",arr[j]);
		}
	}
	k=k+1;
}
for(k=0; k<n-1; k++)
{	
	for(j=0; j<n; j++)
	{
		for(p=1; p<n-k; p++)
		{
			if(arr[j]>arr[p])
			{
				p=arr[p];
				arr[p]=arr[j];
				arr[j]=arr[p];
			}
		}
		
	}
}
int array[n];
k=0;
for(j=0; j<n; j++)
{
	array[j]=arr[k];
	k=k+1;
}
if(n%2==0)
{
	median=((n/2)+(n/2+1));
	printf("median is %d ",median/2);
}
else 
{
m=(n+1)/2;
printf("median is %d ",m);
}
return 0;
}
