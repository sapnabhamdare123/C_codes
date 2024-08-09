// write a program to print the row numbers having the maximum sum in a given matrix.
#include<stdio.h>
int main()
{
int arr[3][4] = {{1,3,3,1},{0,5,0,2},{9,0,0,3}};
//1 2 3 1
//0 5 0 2
//9 0 0 3
int i,s=0,sum=0,c=0,j,max=0,index;
for(int i=0; i<1; i++)
{
	for(j=0; j<4; j++)
	{
		s=s+arr[i][j];
	}
	if(s>max)
	{
		max=s;
		index=i;
	}
}

for(i=1; i<2; i++)
{
	for(j=0; j<4; j++)
	{
	c=c+arr[i][j];
	}
	if(c>max)
	{
		max=c;
		index=i;
	}
}
for(i=2; i<3; i++)
{
	for(j=0; j<4; j++)
	{	
		sum=sum+arr[i][j];
	}
	if(sum>max)
	{
		max=sum;
		index=i;
	}
	
}
printf("%d %d %d ",s,c,sum);
printf("\n");
printf(" max is %d\n",max); 
printf("index is %d",index);
return 0;
}
		
