//write a program to display the number names of the digit of if the numbers is 231 then output should be two a number enterded by user for example three one.
#include<stdio.h>
int main()
{
int n,s=1,r;

printf("enter the number n");
scanf("%d",&n);
while(n>0)
{
	r=n%10;
	//if(r==0)
	//{
		//printf("zero");
	//}
	if(r==1)
	{
		printf("one ");
	}
	if(r==2)
	{
		printf("two ");
	}
	if(r==3)
	{
		printf("three ");
	}
	if(r==4)
	{
		printf("four ");
	}
	if(r==5)
	{
		printf("five ");
	}
	if(r==6)
	{
		printf("six ");
	}
	if(r==7)
	{
		printf("seven ");
	}
	if(r==8)
	{
		printf("enight ");
	}
	if(r==9)
	{
		printf("nine ");
	}
	if(r==0)
	{
		printf("zero ");
	}
	n=n/10;
}
return 0;
}
	
		

