//construct a flowchart to calculate the total mark obttained by a student in examination (sub:hind, math, english, science,computer
#include<stdio.h>
int main()
{
int h,m,e,s,c,t;
printf("enter the number m,e,s,c,t");
scanf("%d %d %d %d %d",&h,&m,&e,&s,&c);
t=h+m+e+s+c;
printf("%d\n",t);
return 0;
}

