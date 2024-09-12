#include <stdio.h>
int main()
{
    int number = 1;
    do
    {
        printf("%d ", number);
        number = number + 2;
    } while (number < 20);

    return 0;
}
