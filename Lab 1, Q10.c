#include <stdio.h>

int main()
{
    int m, p, c, e, cm;

    printf("Math marks /200: ", m);
    scanf("%d", &m);
    
    printf("Physics marks /200: ", p);
    scanf("%d", &p);

    printf("Chemistry marks /200: ", c);
    scanf("%d", &c);

    printf("Entrance Examination marks /100: ", e);
    scanf("%d", &e);

    cm = m / 2 + p / 2 + c / 2 + e; 
    printf("Cut off mark: %d", cm);

    return 0;
}
