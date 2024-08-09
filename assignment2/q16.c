//construct a flowchart to check whether a number entered is a three digit number or not.
#include<stdio.h>
int main()
{
int num;
printf("enter the number num");
scanf("%d",&num);
if (num<1000&& num>99)
{
	printf("it is three digit number");
}
else
{
	printf("it is not three digit number");
}
return 0;
}
