//construct a flowchart to calculate the sum of two given integers however if the sum is between 15 to 20 it will return 20.
#include<stdio.h>
int main()
{
int a,b,sum;
printf("enter the number a,b");
scanf("%d %d",&a,&b);
sum=a+b;
if(sum>15&& sum<20)
{
	printf("20");
}
else
{
	printf("%d",sum);
}
return 0;
}
