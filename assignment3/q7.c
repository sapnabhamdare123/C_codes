//you have denominations of rupee notes int the following form 1,2,5,10,20,100,200,500,2000 take any amount from the user and print the minimum number of note needed to add up to that number.
#include<stdio.h>
int main()
{
int n,a,s;

printf("enter the number n");
scanf("%d",&n);
s=0;
if(n>=2000)
{
	s=n/2000;
	n=s+n;
	n=n%2000;
	printf("%d note of 2000\n",s);
} 
if(n>=500)
{
	s=n/500;
	n=s+n;
	n=n%500;
	printf("%d note of 500\n",s);
}
if(n>=200)
{
	s=n/200;
	n=s+n;
	n=n%200;
	printf("%d note of 200\n",s);
}
if(n>=100)
{
	s=n/100;
	n=s+n;
	n=n%100;
	printf("%d note of 100\n",s);
}
if(n>=20)
{
	s=n/20;
	n=s+n;
	n=n%20;
	printf("%d note of 20\n",s);
}
 if (n>=5)
{
	s=n/5;
	n=s+n;
	n=n%5;
	printf("%d note of 5\n",s);
}
if(n>=2)
{
	s=n/2;
	n=s+n;
	n=n%2;
	printf("%d note of 2\n",s);
}
if(n>=1)
{
	s=n/1;
	n=s+n;
	n=n%1;
	printf("%d note of 1\n",s);
}
return 0;
}
