// takae two sorted arrrays of size m and n from the user as  input and  return the median of the two sorted arrays.
#include<stdio.h>
int main()
{
int n,i,j,p,m,median,z,x;
printf("enter the number n");
scanf("%d",&n);
int arra[n];
int arrb[m];
int c=n+m;
int arr[c];
for(int i=0; i<n; i++)
{
	scanf("%d",&arra[i]);
}
printf("enter the number m: ");
scanf("%d",&m);
for(int j=0; j<m; j++)
{
	scanf("%d",&arrb[j]);
}
for(j=0; j<c; j++)
{
	for(i=0; i<n; i++)
	{
		
		for(p=0; p<m; p++)
		{
			if(arra[i]>arrb[p]);
			{
				arr[j]=arrb[p];
			}
			//else
			//{
				arr[j]=arra[i];
			//}
		}
	}
}
if(c%2==0)
{
	z=(c/2)+(c/2+1);
	printf("median is %d ",z);
}
else
{
	x=(c+1)/2;
	printf("median is %d ",x);
}
return 0;
}
	
	
	

