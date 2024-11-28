#include <stdio.h>

int main()
{
    int n, c, k;

    printf("Enter the number of Rows: ");
    scanf("%d", &n);

    for(k = 1; k <= n; k++)
    {
        for(c = 1; c <= n - k; c++)
        {
            printf(" ");
        }
        for(c = 1; c <= k; c++)
        {
            printf("%d", c);
        }
        for(c = k - 1; c >= 1; c--)
        {
            printf("%d", c);
        }
        printf("\n");
    }

    return 0;
}
