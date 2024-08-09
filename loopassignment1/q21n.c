//some three digit number show the property that the sum of the factorials of the digit equeal the numbers forexample 145 1!+4!+5! develop a flowchart to show how to determine all such numbers.
#include <stdio.h>
int main()
{
int n,i,f,s,a;
i=n;
s=0;
f=1;
while(i<=n)
{
	a=n%10;
	n=n/10;
	f=1;
	if(a>1)
	{
		f=f*a;
		a=a-1;
	}
	else
	{
		s=s+f;
		i=i+1;
	}

printf("\\
return 0;
}
        



