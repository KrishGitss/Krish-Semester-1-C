#include <stdio.h>

int main() {
    int A[] = {1, 3, 5, 7}, B[] = {2, 4, 6, 8, 10};
    int n = sizeof(A) / sizeof(A[0]), m = sizeof(B) / sizeof(B[0]);
    int C[n + m], i = 0, j = 0, k = 0;

    while (i < n && j < m)
        C[k++] = (A[i] < B[j]) ? A[i++] : B[j++];
    while (i < n) C[k++] = A[i++];
    while (j < m) C[k++] = B[j++];

    printf("Merged array: ");
    for (i = 0; i < n + m; i++)
        printf("%d ", C[i]);

    return 0;
}
