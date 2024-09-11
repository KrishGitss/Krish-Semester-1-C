#include <stdio.h>

int main()
{
#include <stdio.h>
    int main()
    {
        int count, n;
        float x, y;

        printf("Input the values of x and n:\n");
        scanf("%f%d", &x, &n);

        y = 1.0;
        count = 1;

        while (count <= n)
        {
            y = y * x;
            count++;
        }

        printf("x=%f; n=%d; \nx to power n=%f", x, n, y);

        return 0;
    }

    return 0;
}
