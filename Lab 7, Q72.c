#include <stdio.h>

void rotate_to_right_once(int array[], int length);
void rotate_to_right(int array[], int length, int n);

int main(void)
{
    int a1[] = {2, 3, 4, 5, 1};

    rotate_to_right(a1, 5, 1);
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", a1[i]);
    } 

    return 0;
}

void rotate_to_right(int array[], int length, int n)
{
    for(int i = 0; i < n; i++)
    {
        rotate_to_right_once(array, length);
    }
}

void rotate_to_right_once(int array[], int length)
{
    int temp = array[length - 1];

    for(int i = length - 2; i >= 0; i--)
    {
        array[i + 1] = array[i];
    }
    array[0] = temp;
}
