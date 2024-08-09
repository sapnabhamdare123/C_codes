/*
*     *
**   **
*** ***
*******
*/
#include<stdio.h>
int main()
{
int n,i,j,s,p,k;
printf("enter the number n");
scanf("%d",&n);
for(i=n; i>0; i--)
{
	for(s=1; s<=n-i; s++)
	{
		printf("*");
	}
	for(j=1; j<=i; j++)
	{
		printf("-");
		printf(" ");
	}
	for(int p=1; p<=n; p++)
	{
		for(int h=1; h<=n-p; h++)
		{
		if(h==i) printf("*");
			
		}
	}
	if (i==n || j+i==n+1) printf("*");
	else printf("*");
	printf("\n");
	}
	
return 0;
}
	
