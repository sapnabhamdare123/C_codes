//make a flowchart to count positive and negative elements in a list take elements as input from the user.
#include<stdio.h>
int main()
{
int n;
printf("enter the number n");
scanf("%d",&n);
int arr[n];
int ps=0,ns=0;
for(int i=0; i<n; i++)
{
	scanf("%d",&arr[i]);
}
for(int i=0; i<n; i++)
{
	if(arr[i]>0)
	{
		ps=ps+1;
	}
	else 
	{
		ns=ns+1;
	} 
}
printf("%d %d\n",ps,ns);
return 0;
}
