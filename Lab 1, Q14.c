#include <stdio.h>

int main()
{
    char c;


    printf("Enter any character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
    printf("%c is an alphabet.", c);
    }
    else if (c >= '0' && c <= '9')
    {
    printf("%c is a digit.", c);
    }
    else 
    {
    printf("%c is a symbol", c);
    }
    
    return 0;
}
