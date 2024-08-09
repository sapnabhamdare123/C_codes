//intersection 
#include<stdio.h>
int main()
{
int n,j,i;
printf("enter the number n :");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
int m; 
printf("enter the number m :");
scanf("%d ",&m);
int array[m];
for(int j=0; j<n; j++)
{
	scanf("%d",&array[j]);
}
for(int i=0; i<n; i++)
{
	for(int j=0; j<m; j++)
	{
		if(arr[i]==array[j])
		{
			printf("%d ",arr[i]);
			break;
		}
	}
}
return 0;
}	
