//take an integer n as input and check whether it ends with 3 or 7 if it ends with 3 print ends with 3 if it ends with 7 print ends with 7 otherwise print the number itself.
#include<stdio.h>
int main()
{
int n;
printf("enter the number n");
scanf("%d",&n);
if(n%10==3)
{
	printf("ends with 3");
}
else if (n%10==7)
{
	printf("ends with 7");
}
else 
{
	printf("% itself",n);
}
return 0;
}
	

