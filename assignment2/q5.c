//construct a flowchart to take selling price as input and calculate the loss  percentage.(note:-the value od sp should be less than cp else print invalid.
#include <stdio.h>
int main()
{
int cp,sp,l;
printf("enter the number cp,sp");
scanf("%d %d",&cp,&sp);
if (cp>sp)
{
	l=cp-sp/cp*100;
	printf("%d",l);
}
else {
	printf("invalid");
}
return 0;
}
