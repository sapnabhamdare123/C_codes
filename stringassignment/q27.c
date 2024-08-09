// print the string in reverse
#include<stdio.h>
#include<string.h>
int main()
{
char str[100] = "hello sapna";
printf("%s",str);
printf("\n");
for(int i=11; i>=0; i--)
{
	printf("%c",str[i]);
}
return 0;
}
