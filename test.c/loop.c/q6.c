//armstrong number.
#include<stdio.h>
int main()
{
int n,s,i,j,f;
printf("enter the number n");
scanf("%d",&n);
for(i=n; i>0; i=i/10)
{
	f=1;
	for(j=i%10; j>1; j--)
	{
		f=f*j;
	}
	s=s+f;
	}
	printf("%d",s);
	return 0;
	}
