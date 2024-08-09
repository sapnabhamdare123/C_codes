//unic n from the usear.
#include<stdio.h>
int main()
{
int n,j,i,c,k;
printf("enter the number n:");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
for(i=0; i<n; i++)
{
	k=arr[i];
	j=i+1;
	c=0;
	if(j<7)
	{
		if(arr[j]==k)
		{
		c=c+1;
		j=j+1;
		}
	}
	if(c==1)
	{
		printf("%d ",arr[i]);
	}
}
return 0;
}

	
