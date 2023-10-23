#include <stdio.h>

int main()
{
    int num;
    int multiplier;
    int limit = 10;
    int product = 0;
    
    printf("Input Number: ");
    scanf("%d", &num);

    for ( multiplier = 0; multiplier <= limit; multiplier++)
    {
        product = num * multiplier;
        printf("\n%d * %d = %d", num, multiplier, product);
    }
    
}