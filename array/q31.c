// write a  program to add two matrices doing without extra array.
#include<stdio.h>
int main()
{
int arr[3][3]={8,2,3,4,8,9};
int array[3][3]={5,6,7,8,12,3};
//int res[2][2];
for(int i=0; i<3; i++)
{
	for(int j=0; j<3; j++)
	{
		printf("%d ",arr[i][j]+array[i][j]);
	}
printf("\n");
}
return 0;
}

