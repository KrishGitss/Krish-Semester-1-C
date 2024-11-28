#include <stdio.h>
#define ARRAY_SIZE 10

int main()
{
    int arr[ARRAY_SIZE];
    int positive_count = 0, negative_count = 0;
    int count_0 = 0;

    printf("Enter 10 integers: ");
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        if(arr[i] > 0)
        {
            positive_count++;
        }
        else if(arr[i] < 0)
        {
            negative_count++;
        }
        else
        {
            count_0++;
        }
    }

    printf("Total number of positive numbers: %d\n", positive_count);
    printf("Total number of negative numbers: %d\n", negative_count);
    printf("Total number of Zeros: %d\n", count_0);
    
    return 0;   
}
