// count the number of triplets whose sum is equal to the given value x.
#include<stdio.h>
int main()
{
int arr[8] = {1,2,3,4,5,6,7,8};
int tt = 0;
int x = 12;
for(int i=0; i<8; i++)
{
	for(int j=i+1; j<8; j++)
	{
		for(int p=j+1; p<8; p++)
		{
			if(arr[i]+arr[j]+arr[p]==x)
			{
			tt++;
			printf("(%d,%d,%d)\n",arr[i],arr[j],arr[p]);
			}
		}
	}
}
printf("%d",tt);
return 0;
}


