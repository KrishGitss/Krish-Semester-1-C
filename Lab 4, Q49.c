#include <stdio.h>

int main()
{
    int rows, c, k;

    printf("Enter the number of Rows: ");
    scanf("%d", &rows);

    for(k = 1; k <= rows; k++)
    {
        for(c = 1; c <= rows - k; c++)
        {
            printf(" ");
        }
        for(c = 1; c <= 2* k - 1; c++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
