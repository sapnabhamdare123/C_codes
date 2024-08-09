//some two digit number have the property that the sum of the square of the number equal the sum of the square of the numbers with reversed digit (for example 48**2+52**2+63**2==construct a flowchart to show how to determine all such two digit numbers.
#include<stdio.h>
int main()
{
int a,b,c,sum,reve,s,i;
printf("enter the number a,b,c");
scanf("%d %d %d",&a,&b,&c);
while((a<=10 && a<100) && (b<=10 && b<100) && (c<=10 && c<100))
{
	sum=a*a+b*b+c*c;
	s=0;
	i=1;
	reve=0;
	int temp =a;
	while (temp > 0)
	{
		reve=reve*10+temp % 10;
			temp= temp/10;
		}
		while (i<=2)
		{
		s=s+(reve %10)*(reve %10);
		reve=reve/10;
		i++;
		}
		sum=sum+reve*reve;
		i=1;
		reve=0;
		temp=c;
		while (temp > 0)
		{
		reve=reve*10+temp %10;
		temp=temp/10;
		}
		while(i <=2)
		{
		s=s+(reve % 10)*(reve % 10);
		reve=reve /10;
		i++;
		}
		sum=sum+reve*reve;
		if(sum==s)
		{
		printf("%d %d %d\n",a,b,c);
		}
		}
		return 0;
		}
	
