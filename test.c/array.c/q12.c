//koi code he ye
//graph
#include<stdio.h>
int main()
{
int n;
printf("Enter the number\n");
scanf("%d",&n);
int arr[n];

for (int i=0; i<n; i++)
{
     scanf("%d",&arr[i]);
}
int max=0;
for (int i=0; i<n; i++)
{
    if (arr[i]>max) max=arr[i];
}
char  a[max][n];
for (int i=0; i<n;  i++)
{
    for (int j=0; j<n; j++)
    {
        a[i][j]=' ';
    }
}
for (int i=0; i<n; i++)
{
      int c=0;
      for (int j=max-1; c<arr[i]; c++)
      {
           if (arr[i]<=0)
           {
               a[j][i]=' ';
               j--;
           }
           else 
           {
           a[j][i]='*';
           j--;
           }
      }
}
for (int i=0; i<max; i++)
{  
    for (int j=0; j<n; j++)
    {
         printf("%c ",a[i][j]);
    }
    printf("\n");
}
return 0;
}ab
