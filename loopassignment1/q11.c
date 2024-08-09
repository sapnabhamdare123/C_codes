// draw a flowchart to show how the sum of the digits of a given numbers can be obtained.(input the numbers from the user.
#include<stdio.h>
int main()
	{
	int n,a,s=0;
	printf("enter the number n ");
	scanf("%d ",&n);
	for(int i=1; i <=n; i++)
	{
		printf("enter the numbers a");
		scanf("%d",&a);
		s=s+a; }
	
	printf("%d\n",s);
	
	return 0;
	}
	
	
	
