//draw a flowchart to find the sum of the first 15 even natural numbers.
#include<stdio.h>
int main()
{
int i,n,s=0;
printf("enter the number n");
scanf("%d",&n);
for(int i=1; i <=n; i++)
{
if(i%2==0){
	s=s+i;}
	
}
printf("%d\n",s);

return 0;
}	


