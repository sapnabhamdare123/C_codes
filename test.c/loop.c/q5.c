//perfect square sum.
#include<stdio.h>
int main()
{
int n,i,s=0,j;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<n; i++)
{
	if(n%i==0)
	{
		s=s+i;
	}
}
j++;
if(s==n)
{

	printf("perfect number");
}
else{
printf("not perfect number");
}
return 0;
}
