#include <stdio.h>

int main()
{

    int a, b, c, d;

    printf("Hours: ", a);
    scanf("%d", &a);

    printf("Minutes: ", b);
    scanf("%d", &b);

    printf("Seconds: ", c);
    scanf("%d", &c);

    d = a * 3600 + b * 60 + c;
    printf("Total seconds: %d", &d);

    return 0;
}
