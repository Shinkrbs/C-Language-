#include <stdio.h>

int main()
{
    int num;
    int originalNum;
    int firstDigit = 0;
    int lastDigit = 0;
    int sum = 0;

    printf("Input Number: ");
    scanf("%d", &num);

    originalNum = num;

    lastDigit = num % 10;

    while (num >= 0 && num > 10) //Diko to magets why nagwork
    {
        num =  num / 10;  
    }
    
    firstDigit = num;
    
    printf("First Digit: %d\nLast Digit: %d", firstDigit, lastDigit);
   
    sum = firstDigit + lastDigit;

    printf("\nSum of First and Last Digit of %d: %d", originalNum, sum);

    return 0;
}

