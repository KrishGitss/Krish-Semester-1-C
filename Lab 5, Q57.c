#include <stdio.h>
#include <limits.h>

int main()
{
    int n; 

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if(n < 2)
    {
        printf("Enter atleast 2 numbers!");
        return 1;
    }

    int arr[n];
    int max = INT_MIN;
    int second_max = INT_MIN;

    printf("Enter %d integers.\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] < max)
        {
            second_max = arr[i];
        }

    }

    if(second_max == INT_MIN)
    {
        printf("There is no Second Max number.\n");
    }
    else
    {
        printf("Max number is: %d\n", max);
        printf("Second max number is: %d\n", second_max);
    }

    return 0;
}
