//prime sum
#include<stdio.h>
int main()
{
int n,sum,j,p,s;
printf("enter the number n :");
scanf("%d",&n);
for(int i=1; i<=1; i++)
{
	for(int j=0; j<n; j++)
	p=0;
	{
		if(i%j==0)
		{
			p=p+1;
		}
	}
	if(p==2)
	{
		s=s+i;
	}
	printf("%d",i);
}
return 0;
}
