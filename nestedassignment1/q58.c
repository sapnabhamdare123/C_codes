/*
* * * * * 
*       * 
*       * 
*       * 
* * * * * 
        * 
        * 
        * 
        * 
* * * * * 
*/
#include<stdio.h>
int main()
{
int i,rows, j,p,k;
printf("enter the no: of rows");
scanf("%d",&rows);
for(i=1; i<=rows; i++)
{
	for(j=1; j<=rows ; j++)
	{
		if(i==1 || j==1 || j==rows || i==rows )
		printf("*");
		else 
			printf(" ");
			printf(" ");
		}
		printf("\n");
	}
	for(p=1; p<=rows; p++)
	{
		for(k=1; k<=rows; k++)
		{
			if( k==rows || p==rows) printf("*");
			else printf(" ");
			printf(" ");
			}
			printf("\n");
			}
	return 0;
	}


