//given number n drow a flowchart to print the count of triplate contaning numbers a,b,and c from 1 to n such  that the sum of the numbers is equal to the n where a<b<c a is the first number  b is the secound number and c is the third number in a treplate for example if the given number is n =10 the triplatd a<b<c are 1,2,7 1,3,6 1,4,5 2,3,5 to 10 is 4 the output sholuld be .
#include<stdio.h>
int main()
{
int a,b,c,n,p;
printf("enter the number n");
scanf("%d",&n);
a=1;
b=2;
c=n-3;
p=0;
while(a<b)
{
	if(b<c)
	{
		if(a+b+c==n)
		{
			printf("%d %d %d",a,b,c);
			p=p+1;
			}
			else{
				b=b+1;
				c=c-1;
			}
			}
				a=a+1;
				b=b-2;
			}
			return 0;
			}

