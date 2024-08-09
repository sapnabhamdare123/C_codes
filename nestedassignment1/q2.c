//given two integers m and n write a program to print solid rectangle pattern of m rows and n columns using the asterisk charcter(*).
/*
***
***
*/
#include<stdio.h>
int main()
{
int i,n,j;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=2; i++)
{
	for(j=1; j<=n; j++)
	{
		printf("*");
	}
	
printf("\n");
}
return 0;
}
