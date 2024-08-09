// in the above question take the first condition as divisbility of year by 400 and construct the flowchart do the dry run for the same inputs.
#include<stdio.h>
int main()
{
int year;
printf("enter the number year");
scanf("%d",&year);
if(year%400==0)
{
	printf("leap year");
}
else {
printf("not leap year");
}
return 0;
}
