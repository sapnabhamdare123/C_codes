//write a program to find the sum of following series.1+2+6+24+120-------n terms.
#include<stdio.h>
int main()
{
int n,j,s=0,i=1;
printf("enter the  number n");
scanf("%d",&n);
for(j=1; j<=n; j++)
{
	i=i*j;
	s=s+i;
	printf("%d",s);
}
return 0;
}
