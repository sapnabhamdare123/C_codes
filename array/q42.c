/*wave print 3
1 2 3
4 5 6
7 8 9
we want
7 4 1
2 5 8
9 6 3
*/
#include<stdio.h>
int main()
{
int m;
printf("enter the number of row :");
scanf("%d",&m);
int n;
printf("enter the number of columns :");
scanf("%d",&n);
int a[m][n];
printf("enter the elements :");
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
		for(int j=m-1; j>=0; j--)
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
		
		
		
		
		
		
		
		
