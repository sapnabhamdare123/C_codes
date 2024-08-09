//harshad number 
#include<stdio.h>
int main()
{
int n,i,s,j;
printf("entere the number n");
scanf("%d",&n);
i=n;
s=0;
while(i>0)
{
	j=i%10;
	s=s+j;
	i=i/10;
}
if(n%s==0)
{
	printf("harshad number");
}
else
{
	printf("not harshad number");
}
return 0;
}

