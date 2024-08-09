#include<stdio.h>
#include<string.h>
int main()
{
char str[] = "college wallah kalla";
char* ptr = str; // prt now points to str[o]
int i=0;
while(str[i]!='\0')
{
	printf("%c",str[i]);
	i++;
}
return 0;
}
