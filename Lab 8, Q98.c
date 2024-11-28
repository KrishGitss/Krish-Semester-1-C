#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int **A, int **B, int **C, int rowA, int colA, int rowB, int colB) {
    for (int i = 0; i < rowA; i++)
        for (int j = 0; j < colB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colA; k++) 
                C[i][j] += A[i][k] * B[k][j];
        }
}

int main() {
    int rowA, colA, rowB, colB;
    printf("Enter dimensions of matrix A (rows cols): ");
    scanf("%d %d", &rowA, &colA);
    printf("Enter dimensions of matrix B (rows cols): ");
    scanf("%d %d", &rowB, &colB);

    if (colA != rowB) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    int **A = malloc(rowA * sizeof(int *)), **B = malloc(rowB * sizeof(int *)), **C = malloc(rowA * sizeof(int *));
    for (int i = 0; i < rowA; i++) A[i] = malloc(colA * sizeof(int));
    for (int i = 0; i < rowB; i++) B[i] = malloc(colB * sizeof(int));
    for (int i = 0; i < rowA; i++) C[i] = malloc(colB * sizeof(int));

    printf("Enter matrix A elements:\n");
    for (int i = 0; i < rowA; i++)
        for (int j = 0; j < colA; j++) scanf("%d", &A[i][j]);

    printf("Enter matrix B elements:\n");
    for (int i = 0; i < rowB; i++)
        for (int j = 0; j < colB; j++) scanf("%d", &B[i][j]);

    multiplyMatrices(A, B, C, rowA, colA, rowB, colB);

    printf("Result matrix C:\n");
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) printf("%d ", C[i][j]);
        printf("\n");
    }

    for (int i = 0; i < rowA; i++) { free(A[i]); free(C[i]); }
    for (int i = 0; i < rowB; i++) free(B[i]);
    free(A); free(B); free(C);

    return 0;
}
