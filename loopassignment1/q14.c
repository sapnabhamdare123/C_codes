//construct a flowchart to show how to determine whether a given number is a perfect number(input th enumber from the usere).
#include<stdio.h>
int main()
{
int n,i,s=0;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<n; i++)
{
	if(n%i==0)
	{
		s=s+i;
	}
}
if(s==n)
{

	printf("perfect number");
}
else{
printf("not perfect number");
}
return 0;
}
