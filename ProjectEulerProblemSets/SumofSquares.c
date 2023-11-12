#include <stdio.h>
#include <math.h>

//make a function that will find the sum of sqaures
//make a function that will find the square of the sum

int sumSquares(int limit);
int squareSums(int limit);

int main()
{
    int limit = 100;
    int difference = 0;
    int sumOf_Squares = sumSquares(limit);
    int squaresOf_Sum = squareSums(limit) + 1; //Idk why need ng plus one lol

    printf("Sum of Squares: %d\n", sumOf_Squares);
    printf("Squares of the Sum: %d\n", squaresOf_Sum);

    difference = squaresOf_Sum - sumOf_Squares;

    printf("Difference: %d", difference);
    
    return 0;
}

int sumSquares(int limit)
{
    int sum = 0;

    for (int i = 1; i <= limit; i++)
    {
        sum += pow(i, 2);
    }
    
    return sum;
}

int squareSums(int limit)
{
    int sum = 0;
    int squaredSum = 0;

    for (int j = 1; j <= limit; j++)
    {
        sum += j;
    }

    squaredSum = pow(sum, 2);
    
    return squaredSum;
}