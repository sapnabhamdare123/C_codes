// given two numbers m and n write a program to print all composite numbers strating form m to n composite numbers more than two factyors.
#include<stdio.h>
int main()
{
int m,n,j,s=0;
printf("enter the number n,m");
scanf("%d %d",&n,&m);
while (m<=n)
{
	for(j=1; j<=m; j++)
	{
		if(m%j==0)
		{
			s=s+1;
		}
	}
	if(s>2)
	{
		printf("%d\n",m);
	}
	m=m+1;
	}
	return 0;
}

