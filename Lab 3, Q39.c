#include <stdio.h>
int main()
{
    int i, j, n, sum = 0, fact;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    { 
	fact = 1;
	for (j = 1; j <= i; j++)
	{
      	    fact = fact * j;
	}
	sum = sum + (fact / i);
    }
    printf("Sum is: %d", sum);
    return 0;
}
