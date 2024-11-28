#include <stdio.h>
#include <ctype.h>

int countVowels(FILE *file) {
    char ch;
    int count = 0;

    while ((ch = fgetc(file)) != EOF) {
      
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    char filename[100];
    printf("Enter the name of the file: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s for reading.\n", filename);
        return 1;
    }

    int vowelCount = countVowels(file);
    printf("Number of vowels in the file: %d\n", vowelCount);

    fclose(file);
    return 0;
}
