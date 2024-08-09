// a shop will give a discount of 10% if the cost of the purchased quanitity is more than 1000 ask the user for quamtity suppose one unit cost 100 judge and print total cost for the user.
#include<stdio.h>
int main()
 {
 int qp,tc,q;
 printf("enter the number q");
 scanf("%d",&q);
 qp=q*100;
 if(qp>1000)
 {
 	tc=qp*10/100;
 	tc=qp-tc;
 	printf("%d",tc);
 }
 else
 {
 	printf("no discount");
 }
 return 0;
 }

