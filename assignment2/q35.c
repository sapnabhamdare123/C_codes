// roller coasters require children to have a minimum height of 5 feet any child below this hight  is genrally not allowed on them write a program to accept a child's height in inches  and display if he or she will be allowed to ride  or not
#include<stdio.h>
int main()
{
int h;
printf("enter the number h");
scanf("%d",&h);
h=h/12;
if(h<5)
{
	printf("not allowed to ride");
}
else if (h>=5)
{
	printf("allowed to ride");
}
return 0;
}
