#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of Rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= rows; j++)
        {
            if(i == j)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    
    return 0;
}
