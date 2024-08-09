// lenth of char
#include<stdio.h>
#include<string.h>
int main()
{
char c[6];
c[0] = 's';
c[1] = 'a';
c[2] = 'p';
c[3] = 'n';
c[4] = 'a';
c[5] = '\0';
int len = strlen(c);
printf("length = %d ",len);
return 0;
}  
