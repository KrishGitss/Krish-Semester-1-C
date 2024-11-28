#include <stdio.h>

int linearSearch(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40}, x;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter a number to search: ");
    scanf("%d", &x);

    int result = linearSearch(arr, n, x);
    if (result == -1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d\n", result);
    return 0;
}
