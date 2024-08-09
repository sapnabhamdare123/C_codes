//construct a flowchart to take selling price and cost price as input and calculate the profit parcentage.
#include <stdio.h>
int main()
	{
	int sp,cp,p;
	printf("enter the number sp,cp");
	scanf("%d %d",&sp,&cp);
	if(sp>cp)
	{
		p=sp-cp/cp*100;
		printf("%d",p);
	}
	else {
		printf("invalid");
		}
	return 0;
	}
