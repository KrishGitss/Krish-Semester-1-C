#include <stdio.h>

int main()
{
    int matrix1[3][3], matrix2[3][3], result[3][3];
    int i, j;

    printf("Enter elements of matrix 1: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = 0;
            for (j = 0; j < 3; j++)
            {
                result[i][j] += matrix1[i][j] * matrix2[i][j];
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
    }
}
