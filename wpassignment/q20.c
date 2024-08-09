// eight max.
#include<stdio.h>
int main()
{
int n,max=0;
printf("enter the number n");
scanf("%d",&n);
int a;
for(int i=0; i<n; i++)
{
	printf("enter the number a");
	scanf("%d",&a);
	if(a>max)
	{
		max=a;
	}
	
}
printf("%d",max);
return 0;
}
