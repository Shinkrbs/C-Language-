#include <stdio.h>

int main()
{
    int num, factor; 
    int digit = 0;
    int sum = 0;

    //Input number
    printf("Input Number: ");
    scanf("%d", &num);

    //Condition to iterate until num is equal to 0
    while (num != 0)
    {
        //To set the value of factor back to one
        factor = 1;
        //To get digit
        digit = num % 10;

        //For factor
        for (int i = 1; i <= digit; i++)
        {
            factor *= i;
        }

        //For sum
        sum += factor;
        //To move to next digit
        num /= 10;
    }
    //Display the result
    printf("The Sum of Factorials of Digits: %d", sum);
    
    return 0;
}