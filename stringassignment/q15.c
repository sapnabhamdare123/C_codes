/*create a string firstname & lastname to store  details of user & print all the characters using a loop.*/
#include<stdio.h>

void printstring(char arr[])
int main(){
	char firstName[] = "sapna";
	char lastName[] = "Bhamdare";
	
	printstring(firstName);
	printfstring(lastName);
return 0;}
void printstring(char arr[]){
	for(int i=0; arr[i] != '\0'; i++)
	{
		printf("%c",arr[i]);
	}
	printf("\n");
}

	
