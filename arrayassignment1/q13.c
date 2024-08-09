// write a program to create a list of 7 numbers from the usesr and print true if the complete liste consists of consecutive numbers or not.
#include<stdio.h>
int main()
{
int n;
printf("enter the number n");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
int p=arr[0],c=0;
for(int i=0; i<n; i++)
{
	if(arr[i]==p)
	{
		c=c+1;
	}
	p=p+1;
}
	if(c==n)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
return 0;
}
