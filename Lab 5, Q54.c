#include <stdio.h>

int main()
{
    int arr[10], size, sum = 0;

    printf("Enter Array size: ");
    scanf("%d", &size);

    printf("Enter the number of elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    printf("Result: %d\n", sum);

    return 0;
}
