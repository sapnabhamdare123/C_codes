// given a matrix a of dimension n x m and 2 coordinates (l1,ri)and(l2,r2). return the sum of the ractangle from (l1,r1) to (l2,r2).
#include<stdio.h>
int main()
{
int r;
printf("enter the numbers of rows:");
scanf("%d",&r);
int c;
printf("enter the numbers of columns :");
scanf("%d",&c);
printf("enter all the elements\n"); 
int arr[r][c];//r*c total elements.
printf("\n");
for(int i=0; i<r; i++)
{
	for(int j=0; j<c; j++)
	{
		scanf("%d",&arr[i][j]);
	}
}
printf("\n");
for(int i=0; i<r; i++)
{
	for(int j=0; j<c; j++)
	{
		printf("%d ",arr[i][j]);
	}
}
printf("\n");


return 0;
}
