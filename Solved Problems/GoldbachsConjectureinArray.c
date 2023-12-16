#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void initArrayRandInt(int x[], int s);
bool isPrime(int x);
bool isEven(int x);
void printGoldbachsPairInArray(int x[], int s);

int main()
{
   int x[10]; 
   int s = sizeof(x) / sizeof(int);
    
    initArrayRandInt(x, s);
    printGoldbachsPairInArray(x, s);
    return 0;
}

void initArrayRandInt(int x[], int s)
{
    time_t t;
    srand((unsigned)time(&t));

    printf("Contents of Array:\n");
    for (int i = 0; i < s; i++)
    {
        x[i] = rand() % 55;
        printf("%d ", x[i]);
    }
}

bool isPrime(int x)
{
    if (x <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isEven(int x)
{
    if (x % 2 == 0 && x > 4)
    {
        return true;
    }
    return false;
}

void printGoldbachsPairInArray(int x[], int s)
{
    printf("\nGoldbachs Conjecture Pairs in Array:");
    for (int i = 0; i < s; i++)
    {
        if (isEven(x[i]))
        {
            printf("\n%d = ", x[i]);
            for (int j = 0; j <= x[i]; j++) 
            {
                if (isPrime(j) && isPrime(x[i] - j)) 
                {
                    int sum = j + x[i] - j;
                    if (x[i] == sum)
                    {
                        printf("%d + %d", j, x[i] - j);
                        break;
                    }  
                }
            } 
        } 
    }
}