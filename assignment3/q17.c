//write a program to check if the given number is divisble by 5,11,both or none a)if it is diviable by 5 then print 5.b)if it is divisble by 11 then print 11.c) if it is divisble by 5 and 11 then print both if it is not divisble by 5 and 11 then print none.
#include<stdio.h>
int main()
{
int n;
printf("enter the  number n");
scanf("%d",&n);
if(n%5==0)
{
	printf("5");
}
else if(n%11==0)
{
	printf("11");
}
else if(n%5==0 && n%11==0)
{
	printf("both");
}
else {
	printf("none");
}
return 0;
}
