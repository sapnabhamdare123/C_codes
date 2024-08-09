// armstrong number up to n .
#include <stdio.h>
int main() 
{
    int n, i, s, j, r, k;
    printf("Enter the number n: ");
    scanf("%d", &n);
    int arr[n];
    k = 0;

    for (i = 1; i <= n; i++) {
        s = 0;
        for (j = i; j > 0; j = j / 10) {
            r = j % 10;
            s = s + r * r * r;
        }
        
        if (s == i) {
            arr[k] = s;
            k++;
        }
    }

    if (k == 0) {
        printf("No Armstrong numbers found up to %d.\n", n);
    } else {
        printf("Armstrong numbers up to %d: ", n);
        for (i = 0; i < k; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

