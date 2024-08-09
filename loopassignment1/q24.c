//constuct the flowchart to display the square of the numbers in the range of a and b (include)
#include<stdio.h>
int main()
{
int a,n,i,c;
printf("enter the number a ,n");
scanf("%d %d",&a,&n);
for(int i=a; i<=n; i++)
{
	c=i*i;
	printf("%d\n",c);
}
return 0;
}
	
