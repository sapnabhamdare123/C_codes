//construct a flowchart to check whether a person is a senior citizen or not (senior citizen age=60).
#include<stdio.h>
int main()
{
int age;
printf("enter the number age");
scanf("%d",&age);
if(age>=60)
{
	printf("it is senior citizen");
}
else 
{
	printf("it is not senior citizen");
}
return 0;
}
