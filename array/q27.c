// enter the number 
#include<stdio.h>
int main()
{
int r;
printf("enter the numbers of rows:");
scanf("%d",&r);
int c;
printf("enter the numbers of columns :");
scanf("%d",&c);
int arr[r][c];//r*c total elements.
for(int i=0; i<r; i++)
{
	for(int j=0; j<c; j++)
	{
		scanf("%d",&arr[i][j]);
	}
}
for(int i=0; i<r; i++)
{
	for(int j=0; j<c; j++)
	{
		printf("%d ",arr[i][j]);
	}
printf("\n");
}
return 0;
}
