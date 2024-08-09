//construct a flowcahrt to show how to rearrange the element in an array so that they apper in reverse order.
#include<stdio.h>
int main()
{
int n,i,j;
printf("enter the number n:");
scanf("%d",&n);
int arr[n];
for(i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
for(j=n-1; j>=0; j--)
{
	printf("%d",arr[j]);
}
return 0;
}
