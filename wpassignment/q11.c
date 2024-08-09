//make a flowchart to input a number and perform the follwing task a to check whether it is a prime number or not b to reverse the number if the number and reverse are also prime display twisted prime otherwise not a twisted prime example sample output 167 and 761 are both prime it is a twested prime.
#include<stdio.h>
int main()
{
int n,i,c=0,r=0,s=0,p;
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
	printf("prime number\n");
}
else
{
	printf("not prime number\n");
}
if(n>0)
{
	r=(r*10)+n%10;
	n=n/10;
}
p=1;
if(p<=r)
{
	if(r%p==0)
	{
		s=s+1;
		p=p+1;
	}
	
	}
	if(s==2)
	{
		printf("twested prime\n");
		}
		else
		{
		printf("not twested prime\n");
		}
	return 0;
}
	
	

