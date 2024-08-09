//delete numbers.
#include<stdio.h>
int main()
{
int n,k,i,j;
printf("enter the number n");
scanf("%d",&n);
int arr[n];
for(i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
printf("enter the number of k:");
scanf("%d",&k);
	for(j=k; j<n-1; j++)
	{
		arr[j]=arr[j+1];
	}
	n=n-1;

	for(int s=0; s<n; s++)
	{
		printf("%d ",arr[s]);
	}
return 0;
}
