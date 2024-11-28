#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;


    fp = fopen("your_file.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

   
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

     
        if (ch == ' ' || ch == '\n') {
            words++;
        }

      
        if (ch == '\n') {
            lines++;
        }
    }


    fclose(fp);

 
    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);
    printf("Number of lines: %d\n", lines);

    return 0;
}
