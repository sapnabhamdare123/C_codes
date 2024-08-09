#include<stdio.h>
#include<string.h>
int main()
{
char s1[] = "physics wallah";
char* s2 = s1;
s1[0] = 'm';
printf("%s",s2);
return 0;
}
