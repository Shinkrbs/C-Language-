#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Declare an integer array with 15 elements and initialize it with the firs 15 fib seq excluding 0 and 1
//Declare another array wtih 50 elements and randomly initialize it with the index content from the fib array
//Print content of all array 

int main()
{
    int fibonacci[15] = {1, 1}; //Can do this
    //or assign values in idex
    //fibonacci[0] = 1;
    //fibonacci[1] = 1;
    int fibonacciRandom[50];

    //find 15 elements of fibonacci sequence
    for (int i = 2; i < 15; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    //Print Fibonacci Sequence
    printf("Fibonacci Sequence:\n");
    for (int j = 0; j < 15; j++)
    {
        printf("%d ", fibonacci[j]);
    }

    //For Random Declaration of values
    srand(time(NULL));
    for (int k = 0; k < 50; k++)
    {
        fibonacciRandom[k] = fibonacci[rand() % 15];
    }

    //Print Random
    printf("\n\nRandom Values of Fibonacci Array:\n");
    for (int l = 0; l < 50; l++)
    {
        printf("%d ", fibonacciRandom[l]);
    }
    
    return 0;
}