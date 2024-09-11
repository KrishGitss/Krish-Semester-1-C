#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    float per;
     
    printf("Math marks: ");
    scanf("%d", &a);

    printf("Physics marks: ");
    scanf("%d", &b);

    printf("Chemistry marks: ");
    scanf("%d", &c);

    printf("English marks: ");
    scanf("%d", &d);

    printf("Computer marks: ");
    scanf("%d", &e);

    per = (a + b + c + d + e) / 5;
    printf("Percentage: %.2f\n", per);

    if (per >= 90)
{
    printf("Grade: A");
}
    else if (per >= 80)
{
    printf("Grade: B");
}
    else if (per >= 70)
{
    printf("Grade: C");
}
    else if (per >= 60)
{
    printf("Grade: D");
}
    else if (per >= 40)
{
    printf("Grade: E");
}
    else
{
    printf("Grade: F");
}

return 0;
}
