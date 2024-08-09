//construct a flowchart to input basic salary of an employee and calculate its gross salry accroding to following.
#include<stdio.h>
int main()
{
int BS,HRA,DA,GS;
printf("enter the number BS");
scanf("%d",&BS);
if(BS<0)
{
	printf("invalid amount");
}
else if(BS<=10000)
{
	HRA=BS*20/100;
	DA=BS*80/100;
	GS=BS+HRA+DA;
	printf("%d",GS);
}
else if(BS<=20000)
{
	HRA=BS*25/100;
	DA=BS*90/100;
	GS=BS+HRA+DA;
	printf("%d",GS);
}
else if(BS>=20000)
{
	HRA=BS*30/100;
	DA=BS*95/100;
	GS=BS+HRA+DA;
	printf("%d",GS);
}
else
{
	printf("invalid amount");
}
return 0;
}

	
		
	
