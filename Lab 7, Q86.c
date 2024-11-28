#include <stdio.h>
#include <string.h>

int stringLength() {
    char str[100];
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    return strlen(str); 
}

int main() {
    printf("Length of the string: %d\n", stringLength());
    return 0;
}
