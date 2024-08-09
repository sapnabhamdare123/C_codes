//constrct the flowchart to display the sum of even and odd numbers in the range of t,r,include.
#include<stdio.h>
int main()
{
int t,r,s,c;
printf("enter the number t,r");
scanf("%d %d",&t,&r);
s=0;
c=0;
while(t<=r)
{
	if(t%2==0)
	{
		s=s+t;
	}
	else
	{
		c=c+t;
	}
t=t+1;
}
printf("%d %d",s,c);
return 0;
}



