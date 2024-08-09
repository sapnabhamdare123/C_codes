//constrct a flowchart to determine the hcf of n given numbers input a value n from the user then input n numbers from the user.
#include<stdio.h>
int main()
{
int n,a,hcf,r,i;
printf("enter the number n,a");
scanf("%d %d",&n,&a);
hcf=a;
for(i=1; i<=n; i++)
{
	if(a>0)
	{
		r=hcf%a;
		hcf=a;
	}
}
printf("%d",hcf);
return 0;
}
		
