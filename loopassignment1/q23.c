//construct the flowchart to make the fibonacci series 0,1,1,2,3,5,8,13,---till n term.
#include<stdio.h>
int main()
{
int n,i,a=0,b=1,z=0;
printf("enter the number n");
scanf("%d",&n);
for(int i=1; i<=n; i++)
{
	printf("%d ",z);
	a=b;
	b=z;
	z=a+b;
}
return 0;
}
