#include <stdio.h>

int sumofEven(int start, int end);

int main()
{
    int start, end;
    int sumof_evenNumbers;

    printf("Input Start: ");
    scanf("%d", &start);
    printf("Input End: ");
    scanf("%d", &end);

    sumof_evenNumbers = sumofEven(start, end);

    printf("Sum of Even Squares: %d", sumof_evenNumbers);

    return 0;
}

int sumofEven(int start, int end)
{
    int sumOf_squares = 0;

    for (int i = 1; i <= end; i++)
    {
        if (i >= start && i <= end)
        {
            if (i % 2 == 0)
            {
                sumOf_squares += i * i;
            }
        } 
    }

    return sumOf_squares;
}