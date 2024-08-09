//construct a flowchart to print multiplication tables from 1 tp 5.
#include<stdio.h>
int main()
{
int m,n,p;
printf("enter the number m,n");
scanf("%d %d",&m,&n);
while(m<=n)
{
	for( p=1; p<=10; p++)
	{
		printf("%d*%d = %d\n",m,p,m*p);
	}
	printf("\n");
m=m+1;
}
return 0;
}
