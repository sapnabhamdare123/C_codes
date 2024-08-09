//write a program to rotate a matrix 90 d clockwisw.
//1 5 9 13
//2 6 9 14
//3 7 11 15
//4 8 12 16
// i want
//13 9 5 1
//14 9 6 2
//15 11 7 5
//16 12 8 4
#include<stdio.h>
int main()
{
int n;
printf("enter the number of rows/columns :");
scanf("%d",&n);
printf("enter all the elements\n");
int arr[n][n];
//input
for(int i=0; i<n; i++)
{
	for(int j=0; j<n; j++)
	{
		scanf("%d",&arr[i][j]);
	}
}
printf("\n");
//transpose
for(int i=0; i<n; i++)
{
	for(int j=i; j<n; j++)
	{
		// swap arr [i][j] and arr[j][i]
		int temp = arr[i][j];
		arr[i][j] = arr[j][i];
		arr[j][i] = temp;
	}
}
// transpose output
for(int i=0; i<n; i++)
{
	for(int j=0; j<n; j++)
	{
		printf("%d ",arr[i][j]);
	}
	printf("\n");
}

printf("\n");	
for(int i=0; i<n; i++)
{
	for(int j=n-1; j>=0; j--)
	{
		printf("%d ",arr[i][j]);
	}
	printf("\n");
}

return 0;
}
