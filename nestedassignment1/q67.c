/*
577
5$30 485
442 401 362
325 290 257 226
197 170 145 122101
*/
#include<stdio.h>
int main()
{
int n,i,p=47,a,j;
printf("enter the numebr n,a");
scanf("%d %d",&n,&a);
for(i=1; i<=n; i++)
{
	for(j=1; j<=i; j++)
	{
		printf("%d ",a);
		a=a-p;
		p=p-2;
	}
	printf("\n");
}
return 0;
}
		
