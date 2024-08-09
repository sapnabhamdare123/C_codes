//inplement copy one string to another
#include<stdio.h>
#include<string.h>
int main()
{
char s1[] = "physics wallah";
char *s2 = s1;
// let's change in s1.
s1[0] = 'm';
printf("%s",s2);
return 0;
}
