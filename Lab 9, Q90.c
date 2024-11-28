#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "My name is Krish";
    char *c;
    int count = 0;

    c = s1;

    int length = strlen(c);

    printf("With Space Length: %d\n", length);

    for(int i = 0; i < length; i++)
    {
        if(c[i] != ' ')
        {
            count++;
        }
        else
        {
            continue;
        }
    }

    printf("Without Space Length: %d\n", count);

    return 0; 
}
