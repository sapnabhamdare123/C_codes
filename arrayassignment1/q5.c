// print n table.
#include<stdio.h>
int main()
{
int n;
printf("enter the number n");
scanf("%d",&n);
int b;
for(int i=1; i<=10; i++)
{
	b=n*i;
	printf("%d\n",b);
}
return 0;
}
