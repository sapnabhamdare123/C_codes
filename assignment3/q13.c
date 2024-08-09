//in the above question take the first condition as divisible of year by 100 and construct the flowchart do the dry run the same input.
#include<stdio.h>
int main()
{
int y;
printf("enter the number y");
scanf("%d",&y);
if(y%100==0)
{
	printf("not leap year");
}
else if(y%4==0);
{
	if(y%400){
	printf("leap year");
	}
}
return 0;
}

