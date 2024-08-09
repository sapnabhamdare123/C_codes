//given a list 1,2,3,4,5,6,7 take a number from the user and check whether it exists in the list or not.
#include<stdio.h>
int main()
{
int k;
printf("ente the number k");
scanf("%d",&k);
int arr[7] = {1,2,3,4,5,6,7};
for(int i=0; i<7; i++)
{
	if(arr[i]==k)
	{
		printf("yes\n");
	
	}
	
}
	printf("no\n");
return 0;
}

