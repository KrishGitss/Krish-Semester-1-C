#include <stdio.h>

void Odd_Even(int num);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    Odd_Even(num);

    return 0;
}

void Odd_Even(int num)
{   
    if(num % 2 == 0)
    {
        printf("This is an Even number!");
    }
    else
    {
        printf("This is an Odd number!");
    }
}
