#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, sum = 0, digits = log10(num) + 1;

    while (num > 0) {
        sum += pow(num % 10, digits);
        num /= 10;
    }

    return sum == original;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d is %sArmstrong number.\n", num, isArmstrong(num) ? "an " : "not an ");

    return 0;
}
