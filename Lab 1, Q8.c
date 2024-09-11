#include <stdio.h>

int main()
{
    float w = 31558150;
    float x, y, z; 

    printf("Earth's revolution time in seconds: %.2f\n", w);

    x = w / 86400;
    printf("Days taken for one revolution of earth: %.2f\n", x);

    y = x * 24;
    printf("Hours taken for one revolution of earth: %.2f\n", y);

    z = y * 60;
    printf("Minutes taken for one revolution of earth: %.2f\n", z);
    
    return 0;
}
