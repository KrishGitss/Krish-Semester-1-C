#include <stdio.h>
int main()
{
    char c;
    
    printf("\nEnter The Character : ");
    scanf("%c", &c);
    
    c >= 97 && c <= 122 ? printf("%c is Small Letter", c) : c >= 65 && c <= 127 ? printf("%c is Captial Letter", c): printf("Others");
    
    return 0;
}
