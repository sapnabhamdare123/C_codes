/*
55555
4444
333
22
1
*/
#include<stdio.h>
int main()
{
int n,i,p;
printf("enter the number n");
scanf("%d",&n);
for(i=n; i>0; i--)
{
	for(p=1; p<=i; p++){
	printf("%d",i);
	}
printf("\n");
}
return 0;
}
