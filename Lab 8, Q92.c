#include <stdio.h>

int main()
{
    int max, *x;
    int a[] = {1, 2, 3, 4, 5};

    x = a;

    max = a[0];

    for(int i = 0; i < 5; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    printf("Biggest number is: %d\n", max);

    return 0;
}
