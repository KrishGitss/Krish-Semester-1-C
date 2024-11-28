#include <stdio.h>
#include <stdbool.h>

#define HAT_SIZES 12
const float HatSizes[HAT_SIZES] = {20.5, 21.0, 21.5, 22.0, 22.5, 23.0, 23.5, 24.0, 24.5, 25.0, 25.5, 26.0};

int main()
{
    float HeadCircumfernce;

    printf("Enter head circumference(inches): ");
    scanf("%f", &HeadCircumfernce);

    int HatSizeIndex;
    bool found = false;

    for(int i = 0; i < HAT_SIZES; i++)
    {
        if(HeadCircumfernce >= HatSizes[i] && HeadCircumfernce < HatSizes[i + 1])
        {
            HatSizeIndex = i;
            found = true;
            break;
        }
    }
    
    if (found)
    {
        printf("Your Hat Size is: %.2f\n", HatSizeIndex + 6.5);
    }
    else
    {
        printf("ERROR! Head circumference out of range.\n");
    }

    return 0;
}
