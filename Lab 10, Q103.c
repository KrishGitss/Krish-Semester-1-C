#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num1, num2, largest;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    largest = MAX(num1, num2);

    printf("The largest number is: %d\n", largest);

    return 0;
}
