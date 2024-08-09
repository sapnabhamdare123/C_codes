//constrct a flowchart to show how ypu can decide if a given number is prime or not.
#include<stdio.h>
int main()
{
int n,i,c=0;
printf("enter the number n");
scanf("%d",&n);
for(int i=1; i<=n; i++)
{
	if(n%i==0)
	{
		c=c+1;
	}
}
if(c==2)
{
	printf("prime number");
}
else
{
	printf("not prime number");
}
return 0;
}
	
	

