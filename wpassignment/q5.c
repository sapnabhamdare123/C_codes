//given a number n and draw a flowchart that prints the count of numbers from 1 to n that are not divisble by any of the following numbwersm(2,3,4,5,6,7,8,9,10)for example if number is 11 then output should be 2 becouse the number 1 and 11 are not divisble by any of follwing numbers.
#include<stdio.h>
int main()
{
int n,i,p=0,j;
printf("enter the number n");
scanf("%d",&n);
for(i=n; i<=n; i++)
{
	for(j=1; j<=n; j++)
	{
		if(n%j==0)
		{
			p=p+1;
		}
	}
	if(p==2)
	{
		printf("%d",p);
	}
	}
	return 0;
	}
	
	
