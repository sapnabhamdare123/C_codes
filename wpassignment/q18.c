//write a program to display the number names of the digit of if the numbers is 231 then output should be two a number enterded by user for example three one.
#include<stdio.h>
int main()
	{
	int n,s=1,r;
	char *words[] = {"zero","one","two","three","four","five","six",
"seven","eight""nine"};
	printf("enter the number n: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		printf("%s",words[r]);
		n=n/10;
		}
	return 0;
	}

		

