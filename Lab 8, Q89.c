#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {1, 2 ,3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int b[5];

    int *x;
    int *y;

    for(int i = 0; i < n; i++)
    {
        *(b + i) = *(a + n - i - 1); 
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
