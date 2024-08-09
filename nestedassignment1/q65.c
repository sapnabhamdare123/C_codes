/*
   *        * 
  * *      * * 
 * * *    * * * 
* * * *  * * * * 
* * * * ** * * * 
* * * * ** * * * 
* * * * ** * * * 
 * * * * * * * *
  * * * * * * *
   * * * * * *
    * * * * *
     * * * *
      * * *
       * *
        *

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
		for(int t=1; t<=3; t++)
		{
			for(int a=1; a<=n; a++)
			{
				printf("*");
				printf(" ");
			}
			for(int b=1; b<=1; b++)
			{
				printf("*");
			}
			for(int r=1; r<=n; r++)
			{
				printf("*");
				printf(" ");
			}	
			printf("\n");
			}
			for(i=n+n; i>0; i--)
{
	for(s=1; s<=(n+n)-i; s++)
	{
		printf(" ");
	}
	for(j=1; j<=i; j++)
	{
		printf(" ");
		printf("*");
	}
	printf("\n");
}
return 0;
}

	
	

	
		
	

