#include <stdio.h>
#include <conio.h>
main()
{
    float sales, com;
    printf("Enter the sales amount: ");
    scanf("%f", &sales);
    if (sales < 100.00)
        com = 0.00;
    else if (sales >= 100.00 && sales < 1000.00)
        com = 0.10 * sales;
    else
        com = 100.00 + 0.08 * (sales - 1000.00);
    printf("\nThe commission is: %.2f", com);
    getch();
}
