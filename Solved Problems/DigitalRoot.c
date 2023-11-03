#include <stdio.h>

int main()
{
    int num, numS;
    int digitalRoot = 0;
    int digit = 0; 
    int sum = 0;

    printf("Input Number: ");
    scanf("%d", &num);

    numS = num;

    //First Iteration
    while (numS > 0)
    {
        digit = numS % 10; //To get each digit
        sum += digit; //Add the digit to the sum for each iteration
        numS /= 10;//To take away last digit of number
    }
    
    //Check if sum is greater than 10
    if (sum >= 10)
    {
        numS = sum;
        sum = 0; //Initialize sum back to 0 to have new value for sum

        while (numS > 0)
        {
            digit = numS % 10; 
            sum += digit; 
            numS /= 10;
        }
    }
    
    digitalRoot = sum;
    printf("The Digital Root of %d is %d", num, digitalRoot);

    return 0;
}