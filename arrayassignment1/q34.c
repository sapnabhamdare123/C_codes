// construct a flowchart to show how to store the first 100 natural numbers in an array and then show them in reverse sequence.
#include<stdio.h>
int main()
{
int p=1,i,j;
int arr[100];
for(i=0; i<100; i++)
{
	arr[i]=p;
	p=p+1;
}
for(j=(100-1); j>=0; j--)
{
	printf("%d ",arr[j]);
}
return 0;
}
