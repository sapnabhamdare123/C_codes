// construct a flowchart to show how to find the product of n natural number.
#include<stdio.h>
int main()
{
int n,i,p=1;
printf("enter the number n");
scanf("%d",&n);
for(int i=1; i <=n; i++)
{
	p=p*i;
printf("%d\n",p);
}
return 0;
}
