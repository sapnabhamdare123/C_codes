//construct a flowchart to check if a given number is one digit or two digit or three digit or more than three digit.
#include<stdio.h>
int main()
{
int num;
printf("enter the number num");
scanf("%d",&num);
if(num>0&&num<10)
{
	printf("one digit number");
}
else if(num>9&&num<100)
{
	printf("two digit number");
}
else if(num>99&&num<1000)
{
	printf("three digit number");
}
else if(num>999)
{
	printf("more then three digit");
}
return 0;
}
