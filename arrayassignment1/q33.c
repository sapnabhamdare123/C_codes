// constuct a flowchart to input n numbers from the user srore them in a list then show how to deteremine the maximum numbers.
#include<stdio.h>
int main()
{
int n,i,k,max=0;
printf("enter the number n:");
scanf("%d",&n);
int arr[n];
for(i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
max=0;
for(k=0; k<n; k++)
{
	if(arr[k]>max)
	{
		max=arr[k];
	}
}
printf("%d is a max number:",max);
return 0;
}
