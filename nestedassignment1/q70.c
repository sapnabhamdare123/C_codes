/*
- - - 1
- - 0 1
- 1 0 1
0 1 0 1
*/
#include<stdio.h>
int main()
{
int n,i,p,j,k; 
printf("enter the numbmer n");
scanf("%d",&n);
i=1;
p=(n-1);
while(i<=n)
{
	j=2;
	k=1;
	if(k<=i)
	{
		if(i%j==0)
		printf("0");
		j=j+1;
		k=k+1;
	}
		{
			printf("1");
		}
	i=i+1;
printf("\n");
}
return 0;
}
	
