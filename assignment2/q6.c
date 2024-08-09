//construct a flowchart ot take two side as input and check whether it is a rectangle or a square.
#include<stdio.h>
int main()
{
int a,b;
printf("enter the number a,b");
scanf("%d %d",&a,&b);
	if (a==b)
	{
		printf("square");
	}
	else{
		printf("rectangle");
	}
	return 0;
	}
