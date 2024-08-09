#include<stdio.h>
int main()
{
char name[] = "pragati";
name[2] = 's';
printf("%c",*(name+2));
return 0;
}

