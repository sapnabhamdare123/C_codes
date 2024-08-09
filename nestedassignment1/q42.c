//amrstrong number .
#include<stdio.h>
int main()
{
int i,n,j,s=0;
printf("enter the numbr n");
scanf("%d",&n);
for(i=n; i>0; i=i/10)
{
	j=i%10;
	s=s+j*j*j;
}
if(s==n)
{
	printf("armstrong number");
}
else{
	printf("not armstrong number");
	}
return 0;
}
	
