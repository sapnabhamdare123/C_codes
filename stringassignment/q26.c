// find the lenth of the sring entred by the user
#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
printf("enter a string\n");
scanf("%[^\n]s",str);
printf("the size of string is :");
int size = 0 ;
int i = 0;
while(str[i] !='\0')
{
	i++;
	size++;
}
printf("%d",size);
return 0;
}
