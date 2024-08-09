// drow a flowchart to accept the height of a person in centimeters and categorize the parson according to their height height <150 dwarf height>=150 avrage height height>=165 tall.
#include<stdio.h>
int main()
{
int h;
printf("enter the number h");
scanf("%d",&h);
if(h<150)
{
	printf("dwarf");
}
else if(150<h>=165)
{
	printf("average");
}
else if(h>=165)
{
	printf("tall");
}
else 
{
	printf("invalid");
}
return 0;
}
