// in a certain hospital the weight of newborn babies are recorded each month and then processed at the end of the month to determine the following. 
//1.mean weight of the babies.
//2.maximum of the weights.
//3.minimum the weight.
//construct a flowchart to show how the weight can be stored as a list first and then processed to detremine the desired output input n from the user where n is number of  babies born in a particular month.
#include<stdio.h>
int main()
{
int n,i,s=0,mean,max,k,min;
printf("enter the number n:");
scanf("%d",&n);
int arr[n];
for(i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
	s=s+arr[i];
}
printf("mean is %d ",s/n);
max=arr[0];
min=arr[0];
for(k=0; k<n; k++)
{
	if(arr[k]>max)
	{
		max=arr[k];
	}
	else if(arr[k]<min)
	{
		min=arr[k];
	}
}
printf(" max is %d min is %d ",max,min);
return 0;
}


