/*
1
2 3 4
5 6 7 8 9
10 11 12 13 14 15 16
*/
#include<stdio.h>
int main()
{
int n, i,j,p=1,k=1;
printf("enter the number n");
scanf("%d",&n);
for(i=1; i<=n; i=i+2)
{
	for(j=1; j<=p; j++)
	{
		printf("%d ",k);
		k=k+1;
	}
	p=p+2;
	printf("\n");
}
return 0;
}
		
	
