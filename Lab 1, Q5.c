#include <stdio.h>

int main()
{
    int x, y, temp;

    printf("Enter the value of 1: ");
    scanf("%d", &x);

    printf("Enter the value of 2: ");
    scanf("%d", &y);
    
    temp=x;
    x=y;
    y=temp;

    printf("Value of x is %d\n", x);
    printf("Value of y is %d\n", y);    

    return 0;
}
