#include <stdio.h>

int main()
{
    int a, b, c, max;

    printf("Enter values: ");
    scanf("%d%d%d", &a, &b, &c);

    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    printf("The largest no. is %d", max);

    return 0;
}
