/*
55555
5555
555
55
5
*/
#include<stdio.h>
int main()
{
int n,i,p;
printf("enter the number n");
scanf("%d",&n);
for(i=n; i>0; i--) 
{
	for(p=1; p<=i; p++)
	{
		printf("5");
	}
printf("\n");
}
return 0;
}
