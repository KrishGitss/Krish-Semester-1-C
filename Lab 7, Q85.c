//PROGRAM TO FIND THE NUMBER OF VOWELS IN A STRING.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowel_count(char *s);

int main()
{
    char s1[] = "I am Gay!";
    char s2[] = "You are Gay!";

    int Vs1 = vowel_count(s1);
    int Vs2 = vowel_count(s2);

    printf("Vowels in String 1: %d\n", Vs1);
    printf("Vowels in String 2: %d\n", Vs2);

    return 0;
}

int vowel_count(char *s)
{
    int count = 0;

    for(int i = 0; i < strlen(s); i++)
    {
        switch(toupper(s[i]))
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
        }
    }
    return count;
}
