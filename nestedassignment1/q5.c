//write a program to print a rectangle pattern of m rows and n columns using the plus charcter (+) 3 rows and 5 columns.
/*
* * * * *
* * * * * 
* * * * *
*/
#include<stdio.h>
int main()
{
int i,n,j;
printf("enter the number");
scanf("%d",&n);
for(i=1; i<=3; i++)
{
	for(j=1; j<=n; j++)
	{
	printf("* ");
	}
printf("\n");
}
return 0;
}
