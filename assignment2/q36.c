//construct a flowchart to a x to be paid accroding the following criteria.
#include<stdio.h>
int main()
{
int cp,t;
printf("enter the number cp");
scanf("%d",&cp);
if(cp>100000)
{
	t=cp*15/100;
	printf("%d",t);
}
else if(cp>5000,cp<=100000)
{
	t=cp*10/100;
	printf("%d",t);
}
else if(cp<=5000)
{
	t=cp*5/100;
	printf("%d",t);
}
return 0;
}
