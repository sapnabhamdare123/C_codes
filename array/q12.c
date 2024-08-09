//calculate the product of all the elements in the given array.
#include<stdio.h>
int main()
{
int sum=1,arr[5] = {1,2,3,4,5};
for(int i=0; i<5; i++)
{
	sum=sum*arr[i];
}
printf("%d",sum);
return 0;
}
