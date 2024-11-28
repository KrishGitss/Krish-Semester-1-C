#include <stdio.h>

void SelectionSortArray();
void PrintArray();

int main()
{
    int arr[] = {60, 45, 28, 37, 85};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Unsorted Array\n");
    PrintArray(arr, n);
    SelectionSortArray(arr, n);

    printf("Sorted Array: \n");
    PrintArray(arr, n);

    return 0;
}

void SelectionSortArray(int arr[], int n)
{
    int i, j, min_idx;

    for(i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for(j = i + 1; j < n; j++)
            if(arr[j] < arr[min_idx])
                min_idx = j;

            if(min_idx != i)
            {
                int temp = arr[min_idx];
                arr[min_idx] = arr[i];
                arr[i] = temp;
            }
    }
}

void PrintArray(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
    printf("%d ", arr[i]);
    }
    printf("\n");
}   
