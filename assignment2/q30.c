//construct a flowchart to check whether a number is negative positive or zero.
#include<stdio.h>
int main()
{
int num;
printf("enter the number num");
scanf("%d",&num);
if(num==0)
{
	printf("zero");
}
else if(num>0)
{
	printf("positive");
}
else
{
	printf("negative");
}
return 0;
}
