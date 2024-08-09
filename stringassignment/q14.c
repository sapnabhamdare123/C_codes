//sentence
/*#include<stdio.h>
int main()
{
// array to store string taken as  input
char sentence[20];
// take user input
printf("enter any sentende :");
//use scanf to teke input
scanf("%[^\n]s", sentence);
// printing the input value
printf("you entered: %s ",sentence);
return 0;
}*/


#include<stdio.h>
int main()
{
	char str[5];
	for(int i=0; i<5; i++)
	{
	
		scanf("%s",&str[i]);
		
	}
	for(int j=0;j<5;j++){
	printf("%c",str[j]);
	
	}
	printf("\n");
return 0;
}

	
s























