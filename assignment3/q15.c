//Accept three integers representing the angles of a triangle in degrees to determine whether they form a valid set of angles of a triangle. If it is not a valid set, then generate a message and terminate the process. If it is a valid set, then the process determines whether it is equiangular (all three angles are the same). It also determines if the triangle is right-angled (has one angle with 90 degrees), obtuse-angled (one angle above 90), or acute-angled (all three angles are below 90 degrees). Finally, it shows the conclusion about the triangle.
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the number a,b,c");
scanf("%d %d %d",&a,&b,&c);
if(a+b+c==180)
{
	if(a==b==c)
	{
		printf("equiargular");
	}
	
}
else if(a==90)
{
	printf("right angle");
}
else if(b==90)
{
	printf("right angle");
}
else if(c==90)
{
	printf("right angle");
}
else if(a>90)
{
	printf("obtuseangle");
}
else if(b>90)
{
	printf("obtuseangle");
}
else if(c>90)
{
	printf("obtuseangle");
}
else if(a<90)
{
	if(b<90)
	{
		if(c<90){
		printf("accute angle");
	}
	}
	}
else
{
	printf("invalid");
}
}




	
	

       
	
