// a store sells vadapavs and samosas they want a system where they enter the number of vadapavs (v) and samosas(s) a customer buys and a bill with the final price is automaticaly calculated end displayed .a  vadapavs costs 12 RS while a samosas cost 15 RS write a program to create sach a system.
#include<stdio.h>
int main()
{
int v,s, m,p;
printf("enter the number s,v");
scanf("%d %d",&s,&v);
m=15*s;
p=12*v;
printf("%d\n %d\n",m,p);
return 0;
}
