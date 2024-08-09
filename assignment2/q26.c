//construct a flowchart to obtain 2 numbers (a and b) and an arithmetic operator (c) and then design a calculator depending upon the operator entered by the user.
#include<stdio.h>
int main()
{
float a,b;
char k;
scanf("%c",&k);
printf("enter the number a,b");
scanf("%f %f",&a,&b);
if (k=='+')
{
	printf("%f",a+b);
}
else if(k=='-')
{
	printf("%f",a-b);
}
else if (k=='*')
{
	printf("%f",a*b);
}
else if (k=='/')
{
	printf("%f",a/b);
}
return 0;
}
	

