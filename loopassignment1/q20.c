//develop a flowchart to show how to determine all the 3 digit armstrong numbers.
#include<stdio.h>
int main()
{
int n,j,s,i;
printf("enter the number n");
scanf("%d",&n);
i=n;
s=0;
while(i>0)
{
	j=i%10;
	s=s+j*j*j;
	i=i/10;
}
if(s==n)
{
	printf("armstrong number");
}
else {
	printf("not armstrong number");
}
return 0;
}
