//accept the age gender (m,f) and the number of day and display the wages accordingly if the age does not full in any range then display the follwing message enter oppropriate age.
#include<stdio.h>
int main()
	{
	int a,d,m,w,f;
	char g;
	printf("enter the number a,d");
	scanf("%d %d",&a,&d);
	printf("enter the gender");
	scanf("%c",&g);
	getchar();
	if(a>=18 && a<30){
	if(g=='m'|| g=='f'){
	w=d*700;
	printf("%d",w);
	}
	else{
	w=d*750;
	printf("%d",w);
	}
	}
	else if(a>=30 && a<40){
	if(g=='m' ||g=='f'){
	w=d*800;
	printf("%d",w);
	}
	else{
	w=d*850;
	printf("%d",w);
	}
	}
	return 0;
	}
	


