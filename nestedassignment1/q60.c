/*
1 2 3 4
8 7 6 5
9 10 11 12
16 15 14 13
*/
#include<stdio.h>
int main()
{
int n,i,j,p=1;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i++) {
if (i%2 !=0) {
	for(j = 1; j<=n; j++)
	{
		printf("%d",p);
		p++;
	}
}
else{
	p=p+n-1;
	for(j=1; j<=n; j++)
	{
	printf("%d",p);
	p--;
	}
	p=p+n+1;
}
printf("\n");
}
return 0;
}
