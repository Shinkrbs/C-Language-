#include <stdio.h>

int main()
{
    int num;
    int numberDigits = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        num /= 10; //Dividing the num to 10 will subtract the value by 10 for example you have 41 and it will become 4

        if (num >= 0)
        {
            numberDigits++; //Increment the num of digits to get count of iteration/digits of the num
        }
    }
    
    printf("Total Digit Count: %d", numberDigits);
    
    return 0;
}