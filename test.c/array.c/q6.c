/*array leaders write a program that reads an integer n (size of array ) an array of n integer and finds and print all the leaders in the array a leader is an element that is greater than all elements to its right.
intput:n=6,array[16,17,4,3,5,2];
output leaders : [17,5,2]
*/
#include<stdio.h>
int main()
{
int n,max= -1;
printf("enter the number n :");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
for(int j=n-1; j>=0; j--)
{
		if(arr[j]>max)
		{
			max=arr[j];
		printf("%d ",max);
		}
	}
return 0;
}
