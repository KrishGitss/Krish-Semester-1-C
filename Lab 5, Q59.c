#include <stdio.h>

int main()
{
    int arr1[10], arr2[10], tarr[10];
    int i;

    printf("Enter 10 integers: ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 10 integers: ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < 10; i++)
    {
    tarr[i] = arr1[i];
    arr1[i] = arr2[i];
    arr2[i] = tarr[i];
    }

    printf("Array 1: \n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", arr1[i]);
    }
    printf("Array 2: \n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", arr2[i]);
    }

    return 0;
}
