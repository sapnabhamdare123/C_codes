// construct a flowchart to determine the acceleration due to gravity (g) where  g can be obtained from the follwing formula 
#include<stdio.h>
int main()
{
int t,l,g;
printf("enter the number t,l");
scanf("%d %d",&t,&l);
g=(4*3.14*3.14*l)/t*t;
printf("%d",g);
return 0;
}
