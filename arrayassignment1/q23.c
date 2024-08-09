// create a list that store the factorial of first n natural numbers take n as input from the user.
#include <stdio.h>

int main() {
    int n, i, f = 1;
    printf("Enter the number n: ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
       int num = arr[i];
        f = 1;
        for (int j = 1; j <= num; j++) {
            f *= j;
        }

        arr[i] = f; 
    }
    printf("Factorials of first %d natural numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


