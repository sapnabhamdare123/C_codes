// pythagoren triplate.
#include<stdio.h>
int main()
{
int n,i,j,k;
printf("enter the number n");
scanf("%d",&n);
i=1;
while(i<=n-2)
{
	j=(i+1);
	
	
	if(j<=n-1)
	k=j+1;
	if(k<=n)
	{
		if((i*i)+(j*j)==(k*k))
		{
			printf("%d %d %d",i,j,k);
			k=k+1;
		}
	}
	j=j+1;
	i=i+1;
	}
	return 0;
	}
	
	
		
