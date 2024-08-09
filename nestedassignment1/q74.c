#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n - 3; i++) {
        if (i == 0 || i == n - 1) {
            for (int j = 0; j < n - 2; j++) {
                printf(" ");
            }
            printf("\n");
        } else {
            for (int j = 0; j < n - 1; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }

    printf(" ");
    for (int i = 0; i < n - 2; i++) {
        printf("* ");
    }
    printf(" \n");

    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            for (int j = 0; j < n - 1; j++) {
                printf("* ");
            }
            printf("\n");
        } else {
            for (int j = 0; j < n - 2; j++) {
                printf(" ");
            }
            printf("\n");
        }
    }

    return 0;
}

        











/*
         *
 * * * * * * * * *
   * * * * * * *
   * * * * * * *
 * * * * * * * * *
         *                                  */
