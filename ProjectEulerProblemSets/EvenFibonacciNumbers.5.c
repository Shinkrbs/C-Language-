#include <stdio.h>

//Recoded Using Functions!

int findEvennextTerm(int limit)
{
    int firstTerm = 1;
    int secondTerm = 2;
    int nextTerm = 0;
    int sum = 2;

    printf("\nSequence: 1,2,");

    while (nextTerm < limit)
    {
            nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;

            printf("%d,", nextTerm);


            if (nextTerm % 2 == 0)
            {
                sum += nextTerm;
            }
        }

    printf("...");

    return sum;
}

int findOddnextTerm(int limit)
{
    int firstTerm = 1;
    int secondTerm = 2;
    int nextTerm = 0;
    int sum = 2;

    while (nextTerm < limit)
    {
            nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;

            if (nextTerm % 2 != 0)
            {
                sum += nextTerm;
            }
        }
    return sum;
}

int main()
{
    int limit;

    printf("Input Limit: ");
    scanf("%d", &limit);

    int evenSum = findEvennextTerm(limit);
    int oddSum = findOddnextTerm(limit);

    printf("\n\nSum of Even Valued Terms: %d", evenSum);
    printf("\nSum of Odd Valued Terms: %d", oddSum);

    return 0;
}
