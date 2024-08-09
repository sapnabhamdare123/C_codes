//prime pair defference
#include<stdio.h>
int main()
{
int n,s=0,p=2,i;
printf("enter the number n: ");
scanf("%d",&n);
for(int i=1; i<=n; i=i+p)
{
	int s=0;
	for(int j=1; j<=i; j++)
	{
		if(i%j==0)
		{
			s++;
		}
	}
	if(s==2)
	{
	
		printf("%d ",i);
	}
}
return 0;
}
