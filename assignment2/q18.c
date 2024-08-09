//accept the temperature in degrees celsius of wather and check whether it is boiling or not(boiling point of water in 100degree).
#include <stdio.h>
int main()
{
int t;
printf("enter the number t");
scanf("%d",&t);
if(t>=100)
{
	printf("it is boiling water");
}
else
{
	printf("it is not boiling water");
}
return 0;
}
