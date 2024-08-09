// create a list that stores all the factors of number n take n as input from the user.
#include<stdio.h>
int main()
{
int n;
printf("enter the number n");
scanf("%d",&n);
int arr[n];
int count = 0;
for(int i=1; i<=n; i++)
{
		if(n % i== 0)
		{
		arr[count] =i;
		count++;
	}
}
printf("factor of %d arr: ", n);
for (int i=0; i<count ; i++)
{
	printf("%d",arr[i]);
}
printf("\n");
return 0;
}
