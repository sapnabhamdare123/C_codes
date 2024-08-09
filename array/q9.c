#include<stdio.h>
int main()
{
int arr[5];
for(int i=0; i<5; i++)
{
	printf("\n enter the number %d ",i+1);
	scanf("%d",&arr[i]);
}
for(int i=1; i<5; i++)
{
	if(arr[i]<35)
	{
	printf("%d ",i);
	}
	}
return 0;
}
