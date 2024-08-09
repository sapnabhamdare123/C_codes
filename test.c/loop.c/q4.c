//binary search
#include<stdio.h>
int main()
{
int n,mid,j,p;
printf("enter the number n:");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
int key;
printf("enter the key value");
scanf("%d",&key);
 j=0,p=n-1;
if(j<n)
{
	mid=(j+p)/2;
	if(key==arr[mid])
	{
		//printf("%d",arr[mid]);
		printf("%d",mid);
	}
	else if(key>arr[mid])
	{
		j=mid+1;
	}
	//break;
	else 
	p=mid-1;
	mid=(j+1)/2;
	if(key==arr[mid])
	{
		//printf("%d",arr[mid]);
		printf("%d",mid);
	}
	else if(key>arr[mid])
	{
		j=mid-1;
	}
}
return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

