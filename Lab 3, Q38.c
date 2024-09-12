#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the range of number(Limit):");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d ", i * i);
        i++;
    }
}
