#include <stdio.h>


int main()
{
    int arr1[10], arr2[10], sum[10];
    int i;

    printf("Enter 10 integers for Array-1: ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 10 integers for Array-2: ");
    for(int i = 0; i < 10; i++);
    {
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        sum[i] = arr1[i] + arr2[i];
    }

    printf("The sum of 2 Arrays: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d", sum[i]);
    }printf("\n");

    return 0;
}
