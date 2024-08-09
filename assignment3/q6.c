//accept the number of day frome the user and calculate the charge for the library accroding to the following.first five day RS 2/day,next five days  3/day,next five day Rs 4/day,after 15 day RS 5/day.
#include <stdio.h>
int main()
	{
	int d,f;
	printf("enter the number d");
	scanf("%d",&d);
	if(d>0 && d<=5)
	{
		f=2*d;
		printf("%d",f);
	}
	else if(d>=6 && d<=10)
	{
		f=3*d;
		printf("%d",f);
	}
	else if(d>=11 && d<=15)
	{
		f=4*d;
		printf("%d",f);
	}
	else if (d>15)
	{
		f=5*d;
		printf("%d",f);
	}
	return 0;
	}
