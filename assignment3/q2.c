//validate a given year.hints the year in the must lie between 1 and 12 and the day must lie 1and 31 depending on the month numbers.
#include<stdio.h>
int main()
{
int m,y,d;
printf("enter the number m,y,d\n");
scanf("%d\n %d\n %d",&m,&y,&d);
if(y>0)
{	
	printf("valid year");
}
else
{
	printf("invalid year");
}
if(m>=1)
{
	printf("valid month");
}
else 
{
	printf("invalid month");
}
if(m<=12)
{
	printf("valid month");
}
else 
{
	printf("invalid month");
}
if(d>=1)
{
	printf("valid date");
}
else 
{
	printf("invalid date");
}
if(d>=31)
{
	printf("valid date");
}
else 
{
	printf("invalid date");
}
return 0;
}


