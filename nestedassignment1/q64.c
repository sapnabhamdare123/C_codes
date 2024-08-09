/*
    *          * 
   * *        * * 
  * * *      * * * 
 * * * *    * * * * 
* * * * *  * * * * * 
  
*/
#include<stdio.h>
int main()
{
int n,i,j,s,p,k;
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
		printf(" ");
	}
	for(p=1; p<=n-i; p++)
	{
	printf(" ");
	}
	for(p=1; p<=s; p++)
	{
		printf(" ");
		}
		for(k=1; k<=i; k++)
		{
			printf("*");
			printf(" ");
		}
		printf("\n");
		}
	return 0;
	}
	
	

	
		
	

