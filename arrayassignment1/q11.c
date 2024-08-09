// make a flowchart to count the total occurrences of a number in the list input the number from the user.
#include<stdio.h>
int main()
{
int n;
printf("enter the number n");
scanf("%d",&n);
int arr[n];
int c,j;
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
printf("enter the number j");
scanf("%d",&j);
for(int i=0; i<n; i++)
{
	if(arr[i]==j)
	{
		c=c+1;
	}
}
printf("%d",c);
return 0;
}
