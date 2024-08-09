//construct a flowchart to check whether the last digit of a number (entered by user ) is divisible by 3 or not
#include <stdio.h>
int main()
	{
	int num,l;
	printf("enter the number num");
	scanf("%d",&num);
	l=num%10;
	if (l%3==0)
	{
		printf("num id divisible by 3");
	
	}
	else
	{
		printf("num is not disible by3");
	}
	return 0;
	}
