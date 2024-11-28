//PROGRAM TO FIND MAXIMUM NUMBER IN AN ARRAY.
#include <stdio.h>

int find_max(int array[], int length);

int main(void)
{
    int myarray[] = {2, 4, 6, 2, 7, 9, 4, 3, 6, 3};
    int yourarray[] = {3, 5, 7, 1, 7, 4, 3, 4};
    int hisarray[] = {3, 6, 3, 2, 4};

    int max1 = find_max(myarray, 10);
    int max2 = find_max(yourarray, 8);
    int max3 = find_max(hisarray, 5);

    printf("Maximum number in MyArray: %d\n", max1);
    printf("Maximum number in YourArray: %d\n", max2);
    printf("Maximum number in HisArray: %d\n", max3);

    return 0;

}

int find_max(int array[],int length)
{
    int max;

    max = array[0];

    for(int i = 1; i < length; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
