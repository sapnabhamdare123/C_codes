// write a program to create a list of 10 numbers from the user and count the number of odd and even numbers.
#include<stdio.h>
int main()
{
int i,s=0,n,c=0;
printf("enter the number n:");
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
		s=s+1;
	}
	else{
	c=c+1;
	}
}
printf("%d %d",s,c);
}
