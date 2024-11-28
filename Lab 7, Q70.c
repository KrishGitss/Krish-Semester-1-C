#include <stdio.h>

int countOccurrences(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 2, 3, 5, 2}, x;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter a number from the array: ");
    scanf("%d", &x); 

    int occurrences = countOccurrences(arr, n, x);
    printf("The element %d occurs %d times in the array.\n", x, occurrences);

    return 0;
}
