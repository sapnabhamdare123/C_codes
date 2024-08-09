//the following rules are used to calculate the borus for the employees of an organization  1) if the pay is more than 3000 the bouns. amount is fixed and it equal to 300 2) if the pay is more than 1600 but less than or equal to 3000 the bonus will be 10% of the pay sbject to a maximum of $240 3) if the pay is less than equal to $1,600 the bonus is 15% of pay subject to a minimum of $100.
#include <stdio.h>
int main()
{
int p,b;
printf("enter the number p");
scanf("%d",&p);
if(p>3000)
{
	b=p+300;
	printf("%d",b);
}
else if(1600<=p>=3000)
{
	b=p*10/100;
	if(b<=240){
	printf("240");
	}
	else {
	printf("%d",b);
	}
}
else if(p<=1600){
b=p*15110;
if(b<100){
printf("100");
}
else{
printf("%d",b);
}
}else{
printf("no bonus");
return 0;
}
}

	

	
			
