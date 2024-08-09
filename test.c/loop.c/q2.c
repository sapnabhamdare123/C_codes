//palindrome product.
#include<stdio.h>
int main()
{
int num,n,a;
printf("enter the number num");
scanf("%d",&num);
n=num;
int rev=0;
while(n>0)
{
	a=n%10;
	rev=rev*10+a;
	n=n/10;
}
if(rev==num)
{
	printf("(%d,%d)",rev,num);
}
return 0;
}

	




























