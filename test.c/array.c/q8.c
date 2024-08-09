/*Array Subset
Description: Check if an array is a subset of another array.
Question: Write a Java program that reads two integers 'n' and 'm' (sizes of arrays), two arrays of 'n'
and 'm' integers, and determines if the first array is a subset of the second array.
Test Cases:

● Input: n = 4, array1 = [5, 8, 12, 3], m = 7, array2 = [8, 3, 7, 5, 12, 10, 2]
● Output: Array1 is a subset of Array2*/
#include<stdio.h>
int main()
{
int n,s=0,j;
printf("enter the number n :");
scanf("%d",&n);
int arr1[n];
for(int i=0; i<n; i++)
{
	scanf("%d",&arr1[i]);
}
int m;
printf("enter the number m :");
scanf("%d",&m);
int arr2[m];
for(int j=0; j<m; j++)
{
	scanf("%d",&arr2[j]);
}
int i=0;
while(i<n)
{
	j=0;
	if(j<n)
	{
		if(arr1[i]==arr2[j])
		{
			s=s+1;
			i=i+1;
		}
		j++;
	}
}
if(s==n)
{
	printf("Array1 is a subset of Array2");
}
	printf("not");
return 0;
}





 










