//write a program to creat a list of n numbers from the user and sum the number of odd and even numbers.
#include<stdio.h>
int main()
{
int n,even=0,odd=0;
printf("enter the number n");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
for(int i=0; i<n; i++)
{
	if(arr[i]%2==0)
	{
		even=even+arr[i];
	}
	else
	{
		odd=odd+arr[i];
	}
}
printf("%d %d",even,odd);
return 0;
}
		

