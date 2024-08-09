// write a program to print the transpose of the matrix entered by the user (leetcode-867).
//1 2 3 
//4 5 6
//1 4
//2 5
//3 6
#include<stdio.h>
int main()
{
int r;
printf("enter the number of rows:");
scanf("%d",&r);
int c;
printf("enter the number of columns :");
scanf("%d",&c);
printf("enter all the elements\n");
int arr[r][c];
for(int i=0; i<r; i++)
{
	for(int j=0; j<c; j++)
	{
		scanf("%d",&arr[i][j]);
	}
		
	}
int brr[c][r];
for(int i=0; i<c; i++)
{
	for(int j=0; j<r; j++)
	{
		//printf("%d ",arr[j][i]);
		brr[i][j] = arr[j][i];
	}
	}
	// printing brr
	for(int i=0; i<c; i++)
	{
		for(int j=0; j<r; j++)
		{
			printf("%d ",brr[i][j]);
		}
	printf("\n");
	}
return 0;
}
