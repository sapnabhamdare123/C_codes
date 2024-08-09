//write a program to print the greatest among the given n number.
#include<stdio.h>
int main()
{
int n,a,max=0;
printf("entere the number n");
scanf("%d",&n);
for(int i=1; i<=n; i++)
{
	printf("enter the number a");
	scanf("%d",&a);
	if(a>max)
	{
	max=a;
	}
	else {
	max=max;
	}
}
printf("%d\n",max);
return 0;
}
