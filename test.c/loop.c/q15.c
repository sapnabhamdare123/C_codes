//write a program to reverse an inteher in c.
#include<stdio.h>
int main()
{
	int n,temp;
	printf("enter the number n : ");
	scanf("%d",&n);
	for(int i=n; i>0; )
	{
		temp = i % 10;
		printf("%d ",temp);
		i = i / 10;
	}
	
return 0;
}
