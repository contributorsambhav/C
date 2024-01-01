#include <stdio.h>

int main() {
    int i, j;
    int n = 6; // Adjust the value of 'n' for the size of the heart

    // Upper part of the heart
    for (i = n / 2; i <= n; i = i + 2) {
        for (j = 1; j < n - i; j = j + 2)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    // Lower part of the heart
    for (i = n; i >= 1; i = i - 2) {
        for (j = 1; j <= n - i; j = j + 2)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
