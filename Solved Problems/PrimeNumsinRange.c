#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isPrime(int num);
void numRange(int r);


int main()
{
    srand(time(NULL));
    int r = rand() % 151;

    printf("Prime Numbers from 1 to %d:\n", r);
    numRange(r);

    return 0;
}

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
           return 0;
        }   
    }
    return 1;
}

void numRange(int r)
{
    for (int i = 1; i < r; i++)
    {
        if (isPrime(i) == 1)
        {
            printf("%d ", i);
        }
    }
}
