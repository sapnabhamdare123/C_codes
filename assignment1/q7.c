// construct a flowchart to show how to interchange the values of  two variable without using a third variable
#include <stdio.h>
int main()
{
int a,b;
printf("enter the number");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d %d",a,b);
return 0;
}


