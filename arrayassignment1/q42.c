//create a list that stores armstrong numbers up to n take n as input from the user.
#include<stdio.h>
int main()
{
int n,i,s=0,j,r,k;
printf("enter the number n:");
scanf("%d",&n);
int arr[n];
for(i=1; i<=n ; i=i+n)
{	
	for(j=n; j>0; j=j/10)
	{
		r=j%10;
		s=s+r*r*r;
	}
	if(s==n)
	{
		k=0;
		if(k<3)
		{
			printf("%d is a armstrong number ",arr[i]=s);
		}
	}
		else
		{
			printf("not armstrong number ");
		}
}
	return 0;
	}
