//construct a flowchart to categorize the shape of a quadrilateral as either a square rhombus rectangle paralleogram or irreguar quadrilateral having input the lengths of  the four sides and one internal angle.
#include<stdio.h>
int main()
{
int AB,BC,CD,DA,I;
printf("enter the number AB,BC.CD,DA,I");
scanf("%d\n %d\n %d\n %d\n %d",&AB,&BC,&CD,&DA,&I);
if(AB==BC && BC==CD && CD==DA) {
if(I==90) {
printf("square");
}
else{
printf("rhombus");
}
}
else if(AB==CD && BC==DA){
if(I==90){
printf("rectangle");
}
else {
printf("parallelogram");
}
}
else if(AB!=BC && BC!=CD && CD!=DA){
if(I!=90){
printf("irragualar quadrilateral");
}
else{
printf("it is not quadrllatral");
}
}
return 0;
}


