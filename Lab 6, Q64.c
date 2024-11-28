#include <stdio.h>
#define ROWS 3
#define COLS 3

int main()
{
    int matrix[ROWS][COLS];
    int i, j, rowSum;

    printf("Enter elements of the 3x3 matrix:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Sum of each row:\n");
    for (i = 0; i < ROWS; i++)
    {
        rowSum = 0;
        for (j = 0; j < COLS; j++)
        {
            rowSum += matrix[i][j];
        }
        printf("Row %d: %d\n", i + 1, rowSum);
    }

    return 0;
}
