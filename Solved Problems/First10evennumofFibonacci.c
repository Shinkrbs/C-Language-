#include <stdio.h>

//Write A program that would output the first 10 even numbers of the Fibonacci Sequence

int fibonacciSequence()
{
    int firstValue = 1;
    int count = 1;
    int secondValue = 2;
    int thirdValue = 0;
    int number = 2;

    while (count <= 9)
    {
        thirdValue = firstValue + secondValue;
        firstValue = secondValue;
        secondValue = thirdValue;

        //Check if value of third value is even
        if (thirdValue % 2 == 0)
        {
            printf("\n"); //prints new line after every iteration

            printf("%d. %d ", number, thirdValue);
            number++;
            count++;
        }
    }
    
    return thirdValue;
}

int main()
{

    printf("1. 2");
    
    fibonacciSequence();

    return 0;
}