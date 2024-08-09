//a company decided to give a bonus of 5% to an employee if his /her year of service is more than 5 years ask users for their salary and year of service and print the net bonus amount;
#include<stdio.h>
int main()
	{
	int s,y,b;
	printf("enter the number s,y");
	scanf("%d %d",&s,&y);
	if(y>5)
	{
		b=s*5/100;
		printf("%d",b);
	}
	else
	{
		printf("do you dont have any bouns amount");
}
return 0;
}

