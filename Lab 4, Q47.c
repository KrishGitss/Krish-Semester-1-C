#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of Rows: ");
    scanf("%d", &rows);

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
