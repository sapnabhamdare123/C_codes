/*
- - - - *
- - - * *
- - * * *
- * * * *
* * * * *
- * * * *
- - * * *
- - - * *
- - - - *
*/
#include<stdio.h>
int main()
{
int n,i,j,s;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	for(s=1; s<=n-i; s++)
	{
		printf(" ");
		}
	for(j=1; j<=i; j++)
	{
		
		printf("*");
	
	}
	printf("\n");
}
	for(i=n-1; i>0; i--)
	{
		for(s=i; s<n; s++)
		{
			printf(" ");
		}
	   for(j=1; j<=i; j++)
	   {
	      printf("*");
	   }
	printf("\n");
	}
	return 0;
	}
	
	
	
