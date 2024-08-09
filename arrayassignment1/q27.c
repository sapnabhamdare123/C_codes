//write a program to create a list of 10 numbers from the usear and sum the elements on the odd positions as odd and on even position as evens.
#include<stdio.h>
int main()
{
int n,i,e=0,o=0;
printf("enter the number n:");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
for(int i=0; i<n; i++)
{
	if(i%2==0)
	{
		e=e+arr[i];
	}
	else{
	o=o+arr[i];
	}
	}
	printf("%d %d ",e,o);
return 0;
}
