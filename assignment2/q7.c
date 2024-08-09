//construct a flowchart to calculate profit or loss print the value of profit incurred or no profit no loss (input given us sp,cp)
#include<stdio.h>
int main()
{
int sp,cp;
printf("enter the number sp ,cp");
scanf("%d %d",&sp,&cp);
	if (sp==cp)
	{
		printf("no profit no loss");
	}
	else if (sp>cp)
	{
		printf("profit");
	}
	else{
		printf("loss");
	}
	return 0;
	}
