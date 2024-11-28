//PROGRAM TO CHECK IF A STRING IS PALINDROME OR NOT.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int Palindrome(char string[]);

int main(void)
{
    char string1[] = "krish";
    char string2[] = "bob";

    if(Palindrome(string1))
    {
        printf("%s is a Palindrome!", string1);
    }
    else
    {
        printf("%s is not a Palindrome!", string1);
    }

    printf("\n");

    if(Palindrome(string2))
    {
        printf("%s is a Palindrome!", string2);
    }
    else
    {
        printf("%s is not a Palindrome!", string2);
    }
    return 0;
}

int Palindrome(char string[])
{
    int middle = strlen(string) / 2;
    int length = strlen(string);

    for(int i = 0; i < middle; i++)
    {
        if(string[i] != string[length - i - 1])
        {
            return false;
        }
        else
        {
            return true;
        }
    }   
    return 0;
}
