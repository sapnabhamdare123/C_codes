//prime factor
#include<stdio.h>
int main()
{
int n,p=2;
printf("Enter the number n: ");
    scanf("%d", &n);
    
    while (n > 1) {
        if (n % p == 0) {
            printf("%d ", p);
            n=n/p;
        } else {
            p++;
        }
    }
    
    return 0;
}

