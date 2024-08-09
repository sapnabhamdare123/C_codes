//construct a flowchartnto obtain a number n and increment its value by 1 if the number is divisble by 4 otherwise decrement its value 1.
#include<stdio.h>
int main()
{
int n;
printf("enter the number n");
scanf("%d",&n);
if(n%4==0)
{
	printf("%d",n+1);
}
else
{
	printf("%d",n-1);
}
return 0;
}
