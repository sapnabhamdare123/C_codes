// given a list and its size print the list in reverse order . 5,4,9,2,1,0.
#include<stdio.h>
int main()
{
int arr[6] = {5,4,9,2,1,0};
for(int i=6-1; i>=0; i--)
{
	printf("%d\n",arr[i]);
}
return 0;
}
