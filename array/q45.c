#include <stdio.h>
int main() {
    int t = 1;
    int array[5] = {7, 2, 6, 4, 5};
    int arr[10][10];

    for (int p = 0; p < 10; p++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (j < array[p]) {
                    arr[i][j] = '-';
                } else {
                    arr[i][j] = ' ';
                }
            }
        }
        // Print the pattern in arr[][] for the current value in array[]
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                printf("%c ", arr[i][j]);
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
        t = t + 1;
    }

    return 0;
}

