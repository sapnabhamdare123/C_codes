#include<stdio.h>
int main()
{
int unit,bill,totalbill,subcharge;
printf("enter the number unit");
scanf("%d",&unit);
if(unit<=50)
{
	bill=unit*0.50;
	subcharge=bill*0.2;
	totalbill=subcharge+bill;
	printf("%d",totalbill);
}
else if(unit<=150)
{
	bill=50*0.50+(unit-50)*0.75;
	subcharge=bill*0.2;
	totalbill=subcharge+bill;
	printf("%d",totalbill);
}
else if(unit<=250)
{
	bill=50*0.50+100*0.75+(unit-150)*1.20;
	subcharge=bill*0.2;
	totalbill=subcharge+bill;
	printf("%d",totalbill);
}
else
{
	bill=50*0.50+100*0.75+100*1.20+(unit-250)*1.50;
	subcharge=bill*0.2;

	printf("%d",totalbill);
}
return 0;
}
	
