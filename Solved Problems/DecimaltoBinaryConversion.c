#include <stdio.h>

//The number is still limited to 1023 
//Still need some changes

int binary(int decimal);

int main()
{
    int decimal;
    int binaryNumber;

    printf("Input Number: ");
    scanf("%d", &decimal);

    if (decimal <= 1023)
    {
        binaryNumber = binary(decimal);
 
        printf("%d in Binary: %d", decimal, binaryNumber);
    }

    if (decimal > 1023)
    {
        printf("Input a Lower Number!\n");
        printf("Input Number: ");
        scanf("%d", &decimal);

        binaryNumber = binary(decimal);
 
        printf("%d in Binary: %d", decimal, binaryNumber);
    }
    
    return 0;
}

int binary(int decimal)
{
    int remainder = 0;
    int binaryNumber = 0;
    int place = 1;

    while (decimal != 0)
    {
        remainder =  decimal % 2; //will result in 1 or 0 (base 2)
        binaryNumber = binaryNumber + remainder * place; 
        decimal /= 2; //dividing the nmber by 2 since binary system is base 2
        place *= 10; // to multiplay place value
    }

    return binaryNumber;
}