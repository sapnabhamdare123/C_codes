//construct a flowchart to show how to obtain the daily wage of a worker on the basis of the hours worked during the day
# include <stdio.h>
int main()
{
int wage,hours,daily;
printf("enter the number");
scanf("%d %d",&wage,&hours);
daily=wage*hours;
printf("%d",daily);
return 0;
}
