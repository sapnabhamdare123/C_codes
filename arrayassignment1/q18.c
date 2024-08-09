// create a list that stores all the prime numbers up to n take n as input from the user,
#include<stdio.h>
int main()
{
int n;
int count=0,a=0;
printf("enter the number n:\n");
scanf("%d",&n);
int arr[n];
for(int i=2; i<=n; i++)
{
	count=0;
	for(int j=1; j<=i; j++)
	{
		if(i%j==0)
		{
			count=count+1;
		}
	}
	if(count==2)
	{
		arr[a]=i;
		a=a+1;
	}
}
for(int j=0; j<a; j++)
{
	printf("%d\n",arr[j]);
}
return 0;
}


