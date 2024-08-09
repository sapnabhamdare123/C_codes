/*
*******
*    *
*   *
*  *
* *
*
*/
#include<stdio.h>
int main()
{
int n,i,j;
printf("enter the number n");
scanf("%d",&n);
for(i=n; i>0; i--)
{
	for( j=1; j<=i; j++)
	{
	if(i==j || i==n || i<n==j) printf("*");
	else printf(" ");
	
	}
printf("\n");
}
return 0;
}

