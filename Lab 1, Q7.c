#include <stdio.h>

int main()
{
    double height, base, area;

    printf("Enter the height: ");
    scanf("%lf", &height);

    printf("Enter the base length: ");
    scanf("%lf", &base);

    area = (height * base)/2;
    printf("Area: %2lf",area);

    return 0;
}
