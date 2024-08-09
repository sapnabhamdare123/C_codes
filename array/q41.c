/* wave print 2 
1 2 3
4 5 6
7 8 9
we want 
3 2 1 
4 5 6
9 8 7
*/
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
printf("\n");
// wave print
for(int i=0; i<n; i++)
{
	if(i%2==0)
	{
		for(int j=m-1; j>=0; j--)
		{
			printf("%d ",a[i][j]);
		}
	}
	else{
	for(int j=0; j<m; j++)
	{
		printf("%d ",a[i][j]);
	}
}
printf("\n");
}
return 0;
}	
