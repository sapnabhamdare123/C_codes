// create a list stored first n even numbers taken as input from the user.
#include<stdio.h>
int main()
{
int n,i,p=0;
printf("enter the number n");
scanf("%d",&n);
int arr[n];
for(int i=1; i<=n; i++)
{
	if(p%2==0)
	{
		arr[i]=p;
		printf("%d ",arr[i]);
	}
	p=p+1;
}
return 0;
}
