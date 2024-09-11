#include <stdio.h>

int main()
{
    int a, b, c;

    printf("First no. ");
    scanf("%d", &a);

    printf("Second no. ");
    scanf("%d", &b);

    printf("Third no. ");
    scanf("%d", &c);

    if (a > b && a > c)
{
    printf("%d is the largest no.", a);  
}
    if (b > a && b > c)
{
    printf("%d is the largest no.", b);
}
    if (c > a && c > b)
{
    printf("%d is the largest no.", c);
}

    return 0;
}
