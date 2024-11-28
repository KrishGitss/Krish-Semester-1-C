#include <stdio.h>
#include <math.h>

int flip_digits(int num, int n) {
    int original_num = num;
    int flipped_num = 0;
    int divisor = pow(10, n);
    int remainder = num % divisor;


    while (remainder > 0) {
        int digit = remainder % 10;
        flipped_num = flipped_num * 10 + digit;
        remainder /= 10;
    }

 
    int unchanged_part = num / divisor;


    flipped_num = flipped_num * divisor + unchanged_part;

    return flipped_num;
}

int main() {
    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the number of digits to flip: ");
    scanf("%d", &n);

    int flipped_num = flip_digits(num, n);

    printf("Flipped number: %d\n", flipped_num);

    return 0;
}
