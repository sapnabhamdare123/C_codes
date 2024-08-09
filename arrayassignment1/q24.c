//factorial of first n natural numbers.
#include<stdio.h>
int main()
{
int n,i,f;
printf("enter the number n");
scanf("%d",&n);
int arr[n];
for(i=0; i<n; i++)
{
	 scanf("%d",&arr[i]);
}
for(i=0; i<n; i++)
{
	int num = arr[i];
	f=1;
	for(int j=1; j<=num; j++)
	{
		f=f*j;
	}
	arr[i]=f;
}
for(i=0; i<n; i++)
{
	printf("%d ",arr[i]);
}
return 0;
}
