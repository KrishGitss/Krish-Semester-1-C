#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "My name is Krish!";
    char *x = s1;
    int length = strlen(s1);
    char s2[100];
    char *y = s2;
    char temp;

    for(int i = 0; i < length; i++)
    {
        temp = x[i];
        x[i] = y[length - i - 1];
        y[length - i - 1] = temp;
    }

    for(int i = 0; i < length; i++)
    {
        printf("%c", y[i]);
    }
    return 0;
}
