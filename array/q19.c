// find the total numbers of pairs in the array whose sum is equal to given value x for example; if array is 1,2,3,4,5,6,7,8 and x=12 so out put should be (4,8) and (5,7).
#include<stdio.h>
int main()
{
int arr[8] = {1,2,3,4,5,6,7,8};
int tp = 0;
int x = 12;
for(int i=0; i<8; i++)
{
	for(int j=i+1; j<8; j++)
	{
		if(arr[i]+arr[j] == x)
		{
			tp++;
			printf("(%d %d)\n",arr[i],arr[j]);
		}
	}
}
printf("%d",tp);
return 0;
}
