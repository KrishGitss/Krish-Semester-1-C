#include <stdio.h>
#define ARRAY_SIZE 10

int main()
{
    int arr[ARRAY_SIZE];
    int even_count = 0, odd_count = 0;
    int element_count[ARRAY_SIZE] = {0};

    printf("Enter 10 Integers: ");
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        if(arr[i] % 2 != 0)
        {
            odd_count++;
        }
        else
        {
            even_count++;
        }
        element_count[arr[i]]++;
    }    

    printf("Total number of Even numbers: %d\n", even_count);
    printf("Total number of Odd numbers: %d\n", odd_count);
    printf("Elements count: \n");
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        if(element_count[i] > 0)
        {
            printf("%d: %d\n", i, element_count[i]);
        }
    }

    return 0;
}
