#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randInt();
int factNum(int *x);

int main()
{
    int num;
    int *x = &num;
    *x = randInt();

    printf("Number: %d\n", num);
    printf("Factorial: %d\n", factNum(x));

    free(x);
    return 0;
}

int randInt()
{
    time_t t;
    srand((unsigned)time(&t));
    int randNum = rand() % 11;
    return randNum;
}

int factNum(int *x)
{
    int product = 1;
    for (int i = *x; i >= 1; i--)
    {
        product *= i;
    }
    return product;
}