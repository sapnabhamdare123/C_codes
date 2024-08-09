/*Question 10: Hailstone Sequence
Description: Generate and print the Hailstone sequence for a given positive integer.
Question: Write a C program that reads a positive integer 'n', and generates and prints
the Hailstone sequence for 'n' according to the following rules:
● If 'n' is even, divide it by 2.
● If 'n' is odd, multiply it by 3 and add 1.
Test Cases:
● Input: 6
● Output: Hailstone sequence for 6: 6 3 10 5 16 8 4 2 1
*/
#include<stdio.h>
int main()
{
int n,s;
printf("enter the number n:");
scanf("%d",&n);
while(n!=1)
{
	printf("%d ",n);
	if (n%2==0) (n=n/2);
	else n=((n*3)+1);
	
}
printf("1\n");
return 0;
}
