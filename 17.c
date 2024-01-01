#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int A[][10], int B[][10], int C[][10], int m, int n, int p, int q);

int main() {
    int m, n, p, q;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Error! The matrices can't be multiplied.");
        return 1;
    }

    int B[p][q];

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < q; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    int C[m][q];

    multiplyMatrices(A, B, C, m, n, p, q);

    printf("\nResultant matrix:\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < q; ++j) {
            printf("%d  ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void multiplyMatrices(int A[][10], int B[][10], int C[][10], int m, int n, int p, int q) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < q; ++j) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < q; ++j) {
            for (int k = 0; k < n; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
