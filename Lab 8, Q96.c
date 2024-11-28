#include <stdio.h>
#include <string.h>

void sortStrings(char *arr[], int n) {
    char *temp;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (strcmp(arr[i], arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar(); 

    char *arr[n];
    char buffer[100];

    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = 0; 
        arr[i] = strdup(buffer);
    }

    sortStrings(arr, n);

    printf("\nSorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
        free(arr[i]);
    }

    return 0;
}
