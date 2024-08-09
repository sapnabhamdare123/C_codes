// comstruct a flowchart to print only the prime factors of a given numbers n.
#include<stdio.h>
int main()
{
int n,i,j,p,s=0;
printf("enter the number n");
scanf("%d",&n);
for(i=n; i<=n; i++)
{
	for(j=1; j<=n; j++)
	{
		if(n%j==0)
		{
			s=s+1;
		}
		
		}
		if(s==2)
		{
			p=1;
			if(p<=n)
			{
				if(n%p==0)
				{
					printf("%d\n",p);
					p=p+1;
				}
			}
		}
	}
	return 0;
	}
				
	

