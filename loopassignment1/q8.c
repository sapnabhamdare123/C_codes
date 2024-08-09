// construct a flowchart to calculate the sum of the following series where n is input 1+1/2+1/3+1/4+1/5+----1/n.
#include<stdio.h>
int main()
{
int n,i,a;
float s=1;
printf("enter the number n");
scanf("%d",&n);
for(int i=2; i<n; i++)
{
	a=1/i;
	s=s+i;
printf("%f",s);
}
return 0;
}


