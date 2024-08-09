// insertion array.
#include<stdio.h>
int main()
{
int num,pos,n,i,j,k;
printf("enter the numbers n");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
printf(" enter the num:");
scanf("%d",&num);
printf("enter the pos:");
	scanf("%d",&pos);
	for(j=n; j>pos; j--)
	{
		arr[j]=arr[j-1];
	}
	arr[j]=num;
	n=n+1;
	for(k=0; k<n; k++)
	{
		printf("%d ",arr[k]);
	}
	return 0;
}
