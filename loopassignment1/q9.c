// construct a flowchart to show how to show find the sum of all the number that are divisible by p but not divisible by q within a given range input lower limit upper limit p and q from the user.
#include <stdio.h>
int main()
{
int n,q,p,i,s=0;
printf("enter the number n, p ,q");
scanf("%d %d %d",&n,&p,&q);
for(int i=1; i<=n; i++)
{
if(i%p==0 && i%q!=0)
{

	s=s+i;
	printf("%d\n",s);}
}
return 0;
}
