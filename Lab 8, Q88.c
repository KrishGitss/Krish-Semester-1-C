//PROGRAM TO COPY AN ELEMENT FROM ANOTHER ARRAY.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[5];

    int *x = a;
    int *y = b;
    
        *(y + 2) = *(x + 2);
    
        printf("%d ", *(y + 2));
    
    return 0;
}
