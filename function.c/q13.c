#include<stdio.h>
int main()
{
int a = 25;
int* x = &a; // int* int ka address store karta he 
int** y = &x; // int** int* ka address store karta he 
int*** z = &y;
printf("%d\n",a);
printf("%d\n",*x); 
printf("%d\n",**y);
printf("%d\n",***z);
return 0;
}
