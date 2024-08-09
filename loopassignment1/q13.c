//construct a flowchart to show how the factors of a given numbers can be obtained (input the numbers from the user.)
#include<stdio.h>
int main()
{
int i,n;
printf("enter the number n");
scanf("%d",&n);
for(int i=1; i<=n; i++)
{
	if(n%i==0)
	{
		printf("%d\n",i);
	}
}
return 0;
}
