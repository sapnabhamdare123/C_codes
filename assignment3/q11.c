//a centaain steel is graded accroding to the following condition 1) rockwell hardness> 50 2) carbon content>0.7 3) tensile strength>5600 kg/cm2  the steel is graded as follows a grade 10 if all the conditons are satisfied b.grade 9 if condtions 1) and 2) are satisfiesd c.grade  are satisfied e. grade 0 otherwise.
#include<stdio.h>
int main()
{
int r,c,t;
printf("enter the number r,c,t");
scanf("%d\n %d\n %d",&r,&c,&t);
if(r>50 && c>0.7 && t>5600)
{
	printf("grade 10");
}
else if(r>50 && c>0.7)
{
printf("grade 9");
}
else if(c>0.7 && t>5600)
{
	printf("grade 8");
}
else if(r>50 && t>560)
{
	printf("grade 7");
}
else {
	printf("grade 0");
}
return 0;
}
