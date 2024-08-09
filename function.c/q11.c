//pointrt
#include<stdio.h>
int main()
{
int a = 5;
int* x = &a;
*x = 12; // a is cheanged.
printf("%d",*x); 
//printf("%p",x);  //  %p se address printf hota he 
//printf("%p",&x); // x  ka address

return 0;
}
