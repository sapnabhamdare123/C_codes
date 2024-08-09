//modifying individual characters.
#include<stdio.h>
int main()
{
char str[20] = "collegewallah";
str[1] = 98; //98 is the sky value of b
int i=0;
while(str[i]!='\0')
{
	printf("%c",str[i]);
	i++;
}
return 0;
}
