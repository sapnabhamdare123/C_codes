//construct a flowchart to find the sum of the squares of first 9 natural numbers that are divisible by 3.
#include<stdio.h>
int main()
{
int n,i,a,s=0;
printf("enter the number n");
scanf("%d",&n);
for(int i=1; i<=n; i++)

	a=i*i;
	if(a%3==0)
	{
		s=s+a;
	}
printf("%d",s);
return 0;
}
