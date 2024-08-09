#include<stdio.h>
int main()
{
	int arr[5] = {3,4,5,6,7};
	arr [4]=100;//{3,4,5,100}
	arr[1]=9; //{9,4,5,100} 
	printf("%d",arr[1]); 
	return 0;
}
