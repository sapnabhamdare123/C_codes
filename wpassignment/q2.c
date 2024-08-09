//construct a flowchart show the logic of printing the first n fibonacci naumber 0,1,1,2,3,5,8,13,21.
#include<stdio.h>
int main()
{
int n,i=1,a=0,b=1,z=0;
printf("enter the number n");
scanf("%d",&n);
while(i<=n)
{
printf("%d",z );
a=b;
b=z;
z=a+b;
i=i+1;
}
return 0;
}
			
 		
