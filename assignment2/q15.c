//construct a flowchart to input the marks of two students in 5 subjects and check who is the topper.
#include<stdio.h>
int main()
	{
	int a,b,c,d,e,v,w,x,y,z,pone,ptwo;
	printf("enter the number a,b,c,d,e,v,w,x,y,z,");
	scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&v,&w,&x,&y,&z);
	pone=a+b+c+d+e/500*100;
	ptwo=v+w+x+y+z/500*100;
	if(pone==ptwo)
	{
		printf("both are equal");
	}
	else if(pone>ptwo)
	{
		printf("a is topper");
	}
	else{
		printf("b is topper");
	}
	return 0;
	}
