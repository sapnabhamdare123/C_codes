/*array frequency count count the frequency of each element in an array.
intpt = 8 [10,20,10,30,20,10,40,30]
output:frequency count element 10:3times 20:2 times 30;2 times 40:1 times.*/
#include<stdio.h>
int main()
{
int n;
printf("enter the number n :");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
for(int i=0; i<n; i++)
{
	int s=1;
	for(int j=i+1; j<n; j++)
	{
		if(arr[i]==arr[j])
		{
			s=s+1;
			arr[j]=arr[j+1];
			n=n-1;
		}
	}

	printf("%d:%d  ",arr[i],s);
}
return 0;
}
 
