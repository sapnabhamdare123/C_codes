// make a program to find the sum and average of elements in a list take elements as input from the user.
#include<stdio.h>
int main()
{
int n;
printf("enter the number n:");
scanf("%d",&n);
int arr[n];
int sum=0;
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
for(int i=0; i<n; i++)
{
	sum=sum+arr[i];
}
printf("%d %d\n ",sum,sum/n);
return 0;
}
