//construct a flowchart to find out the sum of first n terms of the following series 5+55+555+5555+---up to n terms.
#include<stdio.h>
int main()
{
int n,k,s=5,i=5;
printf("enter the number n");
scanf("\n%d",&n);
for(int k=1; k<=n; k++)
{
	i=(i*10);
	s=s+i;
	printf("%d\n",s);
}
return 0;
}
