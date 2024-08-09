//merge
#include<stdio.h>
int main()
{
int arr[7] = {3,6,4,9,11,2,5,};
int a[6] = {1,12,13,3,9,1};
int array[13];
int i;
for(int i=0; i<7; i++)
{
	array[i]=arr[i];
}
for(int j=i; j<=13; j++)
{
	array[j]=a[j];
}
for(i=0; i<13; i++)
{
	printf("%d ",arr[i]);
}
return 0;
}
	
