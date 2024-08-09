//construct a flowchart to show how to interchange the values of two variables
#include <stdio.h>
int main()
{
int a,b,c;
printf("enter the number a,b");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("%d %d",a,b);
return 0;
}

