//construct a flowchart to obtain the fahrenheit equivalent of a temperature given in celsius where the relationship between the two scales of temperature is c/5=(f-32)/9
#include <stdio.h>
int main()
{
int c,f;
printf("enter the number c");
scanf("%d",&c);
f=(c/5*9)+32;
printf("%d",f);
return 0;
}
