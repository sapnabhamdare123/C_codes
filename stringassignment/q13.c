//sentence
#include<stdio.h>
int main()
{
// array to store string taken as input 
char sentence[20];
// take user input
printf("enter eny sentence :");
//use scanf to get input;
scanf("%[^\n]%*c",sentence);
//print the input value
printf("you entered: %s. ",sentence);
return 0;
} 
