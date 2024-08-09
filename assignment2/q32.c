
//construct a flowchart to input mark of five subject physics chemistry biology mathematic and computer calculate percentage and grade accoroding to following.
#include<stdio.h>
int main()
{
int p;
printf("enter the number p");
scanf("%d",&p);
if(p>=90)
{
	printf("grade a");
}
else if(p>=80)
{
	printf("grade b");
}
else if(p>=70)
{
	printf("grade c");
}
else if(p>=60)
{
	printf("grade d");
}
else if(p>=40)
{
	printf("grade e");
}
else if(p<40)
{
	printf("grade f");
}
return 0;
}


