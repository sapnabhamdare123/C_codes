//kth rotated
#include<stdio.h>
int main()
{
int n,j,a,p,t;
printf("enter the number n");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
int k;
printf("enter the value of k");
scanf("%d",&k);
int p[n];
int m=0,t=0,c=1;
while(m!=n)
{
	for(int j=0; j<n; j++)
	{
		if(arr[j]>0)
		{
			if(c==k)
			{
				p=[t] = arr[j];
				a[j] = -1;
				c = 1;
				t = t+1;
				m=m+1;
			}
			c=c+1;
		}
	}
}
for(int i=0; i<n; i++)
{
	printf("%d",p[i]);
}
return 0;
}			
			
			
			
