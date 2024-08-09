#include<stdio.h>
void england()
{
	printf("you are in England\n");
	return ;
}
void australia()
{
	printf("you are in australia\n");
	england(); //calling england
	return ;
}
void india()
{
	printf("you are in india\n");
	australia(); //calling australia;
	return ;
}
int main()
{
	india(); // calling india
	return 0;
}

