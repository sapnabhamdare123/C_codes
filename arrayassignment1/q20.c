// create a list that stores perfect numbers up to n take n as input from the user.
#include <stdio.h>

int is_perfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Perfect numbers up to %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (is_perfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
