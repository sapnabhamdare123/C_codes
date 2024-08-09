//a group of students has 20 chocolate bass and 10 candy bags they want to know how much money they can raise if they sell all possible chocolate bars and candy bag combinations drow a flowcharat to calculate the total revenue from all possible sales assume that the price of a candy bag is 2 rs and 5 rs.
#include<stdio.h>
int main()
{
int ch,ca,chb,cab,i,a,j,b,c;
ch=20;
ca=10;
chb=5;
cab=2;
i=1;
while(i<=chb)
{
	a=ch*i;
	i=i+1;
}
j=1;
if(j<=cab)
{
	b=ca*j;
	j=j+1;
}
c=a+b;
printf("%d",c);
return 0;
}
