#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "My name is Krish!"; 
    int length = strlen(s1);
    char *a;
    int count = 0;

    a = s1;

    for(int i = 0; i < length; i++)
    {
        if(a[i] == ' ')
        {
            count++;
        }
    }
    printf("%d", count + 1);

    return 0;
}
