// construct a flowchart to show how consecutive even number starting from 2 are summed up until the sum just exceeds  1000   and the show the sum and the number of even numbers added.
# include<stdio.h>
int main()
	{
	int i,n,s=0;
	printf("enter the number n");
	scanf("%d",&n);
	for(int i=1; s <=n; i++)
	{
	if(i%2==0)
		s=s+i;
	}
	printf("%d\n",s);
	return 0;
	}
