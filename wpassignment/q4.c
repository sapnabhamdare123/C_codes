// construct a flowchart to find a series of five consecutive numbers the sum os the squaress of the first three of which is equal to the sum of the square of the last two for example: 5**2+6**2+7**2==8**2+9**2.
#include<stdio.h>
int main()
{
int n,i,s=0,j,p,a,r=0,b,k;
printf("enter the number n");
scanf("%d",&n);
for(i=n; i<=n; i++)
{
	printf("enter the number a");
	scanf("%d",&a);
	for(j=1; j<=3; j++)
	{
		p=a*a;
		s=s+p;
		a=a+1;
	}
	for(k=1; k<=2; k++)
		b=a*a;
		r=r+a;
		a=a+1;
	}
	if(s==r)
	{
		printf("consecutive number");
		}
		printf("not consigative numbers");
	return 0;
	}
	
