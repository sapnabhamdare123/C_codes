// wave print
// 1 2 3 4 
// 5 6 7 8
// 9 10 11 12
//we want
// 1 2 3 4
// 8 7 6 5
// 9 10 11 12
#include<stdio.h>
int main()
{
int m ;
printf("enter no of rows of 1st matrix :");
scanf("%d",&m);
int n;
printf("enter no of columns of 1st matrix :");
scanf("%d",&n);
int a[m][n];
printf("\nenter elements of 1st matrix :");
for(int i=0; i<m; i++)
{
	for(int j=0; j<n; j++)
	{
		scanf("%d",&a[i][j]);
	}
}
// wave print
printf("\n");
for(int i=0; i<n; i++)
{
	if(i%2==0)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d ",a[i][j]);
		}
	}
	else{
	for(int j=n-1; j>=0; j--)
	{
		printf("%d ",a[i][j]);
	}
}
printf("\n");
}
return 0;
}