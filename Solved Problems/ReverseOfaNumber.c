#include <stdio.h>

//Print reverse of a number
int main()
{
    int num;
    int reverse = 0;
    int lastDigit;

    printf("Input Number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        lastDigit = num % 10; //Extract last digit of the given number by performing modulo division
        reverse *= 10; // Increase the place value of reverse by one
        //printf("%d, ", reverse);
        reverse += lastDigit; //Add lastDigit to reverse 
       // printf("%d,", reverse);
        num /= 10; // Remove last digit of num 
    }

    printf("Reverse: %d", reverse);

    return 0;
}