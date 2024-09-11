#include <stdio.h>

int main()
{
double Fahrenheit, Centigrade;

printf("Fahrenheit: ");
scanf("%lf",&Fahrenheit);

Centigrade=(Fahrenheit-32)*5/9;
printf("Centigrade: %lf",Centigrade);

    return 0;
}
