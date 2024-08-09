/*
1
22
333
4444
555555
*/
#include<stdio.h>
int main()
{
int n,i,p;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	for(p=1; p<=i; p++){
	printf("%d",i);}
printf("\n");
}
return 0;
}
	
