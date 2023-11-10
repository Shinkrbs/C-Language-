#include <stdio.h>

int main()
{
    int num1, num2;
    int product = 0;

    printf("Input Multiplier: ");
    scanf("%d", &num1);
    printf("Input Multiplicand: ");
    scanf("%d", &num2);

    for (int temp = 0;  temp < num2; temp++)
    {
        product += num1;
    }

    printf("%d x %d = %d", num1, num2, product);
    
    return 0;
}