#include <stdio.h>
#define ROWS 3
#define COLS 3

int main()
{
    int matrix[ROWS][COLS];
    int i, j, max, min;

    printf("Enter elements of the 3x3 matrix:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    max = min = matrix[0][0];

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
