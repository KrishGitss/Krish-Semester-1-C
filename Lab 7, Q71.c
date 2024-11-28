#include <stdio.h>

int findPivot(int arr[], int low, int high) 
{
    while (low < high) 
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > arr[high])
        {
            low = mid + 1;
        }       
        else
        {
            high = mid;
        }
    }   
    return low;
}

int main() 
{
    int arr[] = {6, 7, 8, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pivotIndex = findPivot(arr, 0, n - 1);
    printf("Pivot element is %d at index %d\n", arr[pivotIndex], pivotIndex);

    return 0;
}
