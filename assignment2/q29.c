//construct a flowchart to input the month number and print the number of days in that month
#include<stdio.h>
int main()
{
int m;
printf("enter the number m");
scanf("%d",&m);
if(m==2)
{
	printf("28 or 29");
}
else if(m==4 || m==6 || m==9 || m==11)
{
	printf("30");
}
else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
{
	printf("31");
	}
else{
printf(" invalid");
}

return 0;
}

