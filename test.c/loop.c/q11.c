//car chal gai
#include<stdio.h>
int main()
{
//int i=1,j=0;
int n;
printf("enter the number n");
scanf("%d",&n);
int i=1;
int j=1;
while(i==1 || i==0)
{
	//int i;
	//printf("enter the number : ");
	scanf("%d",&i);
	if (i!=0 && i!=1) {printf("CRAsh"); break;}
	
		if(i==1)
		{
		printf("start\n");
		scanf("%d",&j);
		if (j!=0 && j!=1) {printf("CRAsh"); break;}
	
		if (j==i){ printf("Allready start\n");}
		else {printf("stop\n");}
	        }
	        
	 else 
	{
		printf("stop\n");
		scanf("%d",&j);
		if (i!=0 && i!=1) {printf("CRAsh"); break;}
	        if (j==i) {  printf("Already Stop\n");}
	}
}
return 0;
}
		
