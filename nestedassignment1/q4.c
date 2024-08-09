//given an integer number n as input write a program to print the right angled triangular pattern of n line using an asterisk * character if the given n umber is four.
/*
*
**
***
****
*/
#include<stdio.h>
int main()
{
int i,n,j;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	for(j=1; j<=i; j++)
	{
	printf("💥️");
	}
printf("\n");
}
return 0;
}
