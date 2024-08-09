//construct a flowchart to obtain the length l and breadth b of a rectangle and check whether er  its area is greater or perimeter is greater or both are equal.
#include<stdio.h>
int main()
{
	int l,b,area,perimeter;
	printf("enter the number l,b");
	scanf("%d %d",&l,&b);
	area=l*b;
	perimeter=2l+b;
	if(area==perimeter)
	{
		printf("bboth are equal");
	} 
	else if(area>perimeter)
	{
		printf("area is greater");
	}
	else 
	{
		printf("perimeter is greater");
	}
	return 0;
	}
	
