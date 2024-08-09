//construct a flowchart to calculate the electricity bill (accept number of units from the user) accroding to the following criteria.
#include<stdio.h>
int main()
{
int unit,amount;
printf("enter the number unit");
scanf("%d",&unit);
if(unit<=100)
{
	printf("not charge");
}
else if(unit<=200)
{
	amount=unit*5;
	printf("%d",amount);
}
else if(unit<=400)
{
	amount=100*0+100*5+unit-200*10;
	printf("%d",amount);
}
else
{
	printf("invalid");
}
return 0;
}
