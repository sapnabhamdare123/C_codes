#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x,n,a,b,c;
		scanf("%d%d",&x,&n);
		a = x * 100;
		b = n - a;
		if(b <=0)
		{
			printf("0\n");
		}
		else if(b % 2 == 0)
		{
			printf("%d\n",b/100);
		}
		else 
		{
			printf("%d\n",(b/100)+1);
		}
	}
	return 0;
}
		
		
