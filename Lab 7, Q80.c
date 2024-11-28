//PROGRAM TO OUTPUT THE FIBONACCI SERIES.
#include <stdio.h>

int main()
{
    int a = 0, b = 1, fib = 0, length = 0, a; 
    
    printf("Enter a number: ");
    scanf("%d", &a);

    do
    {
        printf("Enter the Sequence length: ");
        scanf("%d", &length);

        if(length < 3)
        {
            printf("Length must be more than 3!\n");
        }
    }while(length < 3);

    printf("%d %d", a, b);
    for(int i = 2; i < length; i++)
    {
        fib = a + b;
        printf(" %d", fib);

        a = b;
        b = fib;
    }
    
    return 0;
}
