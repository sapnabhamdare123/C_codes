//drow a flowchart to show the logic of obtainig the reversed from of a given whole numbers input numbers from the user.
#include<stdio.h>
int main()
{
int n,a,b,c,d;
printf("enter the number n");
scanf("%d",&n);
while(n>0)
{
a=n%10;
printf("%d",a);
n=n/10;
}
return 0;
}


