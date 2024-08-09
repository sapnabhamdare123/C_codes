// in a certain city the maximum and the minimum temperature on each day are recorded each month to determine the follwing at the end of the month
//a.mean maximum temperature in the month 
//b. mean minimum temperature in the month
//c.highest maximum temperature
//d.lowest minimum temperature
//e.hottest day number of the month 
//f.coldest day number of the month
//drow a flowchart to show how the desired result can be obtained input n from the user where n is number of day.
#include<stdio.h>
int main()
{
	int n,i,smax,smin,h,a,max,min,g;
	printf("enter the number n : " ); 
	scanf("%d",&n);
	int pmax[n];
		for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&pmax[i]);
		smax=smax+pmax[i];
	}
	printf("enter the number a:");
	scanf("%d",&a);
	int pmin[n];
	for(a=0; a<n; a++)
	{
		scanf("%d",&pmin[a]);
		smin=smin+pmin[a];
	}
printf("mean maxt %d ",smax/n);
printf("mean mint %d ",smin/n);
max=0;
h=0;
for(i=0; i<n; i++)
{
	if(pmax[i]>max)
	{
		max=pmax[i];
		
		h=pmax[i];
	}
}
printf("heightest max %d ",max);
printf("hotest day number %d",h);
min=pmin[0];
g=0;
for(int j=1; j<n; j++)
{
	if(pmin[j]<min)
	{
		min=pmin[j];
		
		g=j;
	}
}
printf(" lowest mean t %d ",min);
printf("coldest day no %d ",g);
return 0;
}	

