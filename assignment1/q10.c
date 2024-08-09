//construct a flowchart to calculate to  the area and perimeter of a rectangle.
#include <stdio.h>
int main()
{
int l,b,area,perimeter;
printf("enter the number l,b");
scanf("%d %d",&l,&b);
area=l*b;
perimeter=2*(l+b);
printf("%d\n%d\n",area,perimeter);
return 0;
}
