// size of string
#include<stdio.h>
#include<string.h>
int main()
{
char str[40];
puts("enter a strings");
scanf("%[^\n]s",str);
puts("The size of is : ");// automatically \n bhi de deta hai
//size
int size=0;
int i=0;
while(str[i]!='\0')
{
	size++;
	i++;
}
printf("%d",size);
return 0;
}
