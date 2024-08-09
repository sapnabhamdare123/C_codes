//write a  to print a hollow square pattern of n row and n colume using the arterisk character (*)where intger n is given as an input 
/*
* * * *
*     *
*     *
* * * *
*/
#include<stdio.h>
int main()
{
int i,n,j;
printf("enter the number n");
scanf("%d",&n);
for(i=1;i<=n; i++)
{
printf("*");
	
	for(j=1; j<=i; j++)
	{
		printf("*");
	}
printf("\n");
}
return 0;
}
