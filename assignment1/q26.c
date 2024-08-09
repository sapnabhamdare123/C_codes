//construct a flowchart to calculate how many books we can buy if we have x rs (cost of a book rs y)
#include <stdio.h>
int main()
{
int x,y,b;
printf("enter the number x,y");
scanf("%d %d",&x,&y);
b=x/y;
printf("%d\n",b);
return 0;
}
