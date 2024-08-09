//construct a flowchart to find the lateral surface area and total surface area of a cuboid.
#include <stdio.h>
int main()
{
int l,b,h,lsa,tsa;
printf("enter the number l,b,h");
scanf("%d %d %d",&l,&b,&h);
lsa=l+b;
tsa=2*(l*b+b*h+l*h);
printf("%d\n %d\n",lsa,tsa);
return 0;
}

