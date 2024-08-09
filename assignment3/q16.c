//accept the lenth of the three sides of a trangle to validate whether they can be the sides of a trangle and then calssity the trangle as equiateral (all this sides are equal) scalens (all three side are equal) and then to see whether it id right angle trangle (the sum of the square of two side is equal to the square of the third side) (hint three numbers are valid as the side of a trangle if each one is positive and the sum of every two numbers is greater than the third).
#include<stdio.h>
int main()
	{
	int a,b,c;
	printf("enter the number a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b==c)
	{
		printf("equilateral");
	}
	else if(a==b || b==c || a==c)
	{
		printf("isosceles");
	}
	else if(a!=b!=c)
	{
		printf("scalene");
	}
	else if(( a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (b*b)+(c*c)==(a*a))
	{
		printf("right angle trangle");
	}
	else
	{
		printf("invalid");
	}
	return 0;
	}

