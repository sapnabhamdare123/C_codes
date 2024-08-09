//sentence
#include<stdio.h>
int main()
{
// array that stores the string which we need to output
char sentence[20];
//take user input
printf("enter any sentence: ");
// use fgest to take the input 
fgets(sentence,20,stdin);
// printing the input value using printf
printf("you entered : %s",sentence);
return 0;
}
