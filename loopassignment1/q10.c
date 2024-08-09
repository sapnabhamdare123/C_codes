// draw a flowchart to show how to obtain the hcf and lcm of two numbers.
#include<stdio.h>
int main()
{
int N,n,i,hcf,lcm,a,b,min;
printf("enter the number N,n");
scanf("%d %d",&N,&n);
i=2;
hcf=1;
a=N;
b=n;
if(a>b)
{
	min=b;
}
else
{
	min=a;
}
(i<min);
{
	if(a%i==0 && b%i==0){
	hcf=hcf*i;
	a=a%i;
	b=b%i;
}
else{
	i=i+1;
}
}
{
	lcm=N*n/hcf;
	printf("%d\n %d\n",hcf,lcm);
}
return 0;
}


	
