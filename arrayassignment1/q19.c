// create a list that stores perfect numbers up to n take n as input from the user.
#include<stdio.h>
int main()
{
int n,i,s=0;
int arr[n];
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<n; i++)
{
	if(n%i==0)
	{
		s=s+i;
	}
}
if(s==n)
{

	printf(" perfect number is %d",arr[i]=s);
}
else{
printf("not perfect number");
}
return 0;
}

	

