#include <stdio.h>

int main()
{
    int num; 
    int square, cube;

    printf("Enter a number: ");
    scanf("%d", &num);

    int *a;

    a = &num;

    square = (*a) * (*a);

    cube = (*a) * (*a) * (*a);

    printf("Square: %d\n", square);
    printf("Cube: %d\n", cube);

    return 0;
}
