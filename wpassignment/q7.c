//write  a program to find the kth largest factor of the given number n for example if the given number n is 12 and k is 2 as the factor of 12 are 1,2,3,4,6 and 12 then the second largest factor 6 so the output should be 6.
#include<stdio.h>
int main()
{
int n,s=0,p=1,j,i;
printf("enter the number n");
scanf("%d",&n);
for(i=n; i<=n; i++)
{
	for(j=1; j<=n; j++)
	{
		if(n%p==0)
		{
			s=p;
			p=p+1;
		}
		}
	}
	printf("%d",s);

return 0;
}
			

