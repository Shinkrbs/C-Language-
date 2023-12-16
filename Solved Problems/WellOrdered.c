#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randInt(int x[], int s);
void dispArr(int x[], int s);
int isWellOrdered(int x);
int isCountWellOrdered(int x[], int s);
void displayWellOrdered(int x[], int s);

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int s = rand() % 21;
    int x[s];

    randInt(x, s);
    displayWellOrdered(x, s);
    printf("\nCount of Well-Ordered Pairs in Array: %d", isCountWellOrdered(x, s));
    return 0;
}

void randInt(int x[], int s)
{
    for (int i = 0; i < s; i++)
    {
        x[i] = rand() % 101;
    }
    printf("Contents of Array With Size %d:\n", s);
    dispArr(x, s);
}

void dispArr(int x[], int s)
{
     for (int i = 0; i < s; i++)
    {
        printf("%d ", x[i]);
    }
}

int isWellOrdered(int x)
{
    int last = x % 10; 
    x /= 10;
    while (x != 0)
    {
        int curr = x % 10;
        if (curr >= last)
        {
            return 0;
        }
        last = curr;
        x /= 10;
    }
    return 1;
}

int isCountWellOrdered(int x[], int s)
{
    int count = 0;
    for (int i = 0; i < s; i++)
    {
        if (isWellOrdered(x[i]))
        {
            count++;
        }
    }
    return count;
}

void displayWellOrdered(int x[], int s)
{
    printf("\nWell Ordered Pairs:\n");
    for (int i = 0; i < s; i++)
    {
        if (isWellOrdered(x[i]))
        {
            printf("%d ", x[i]);
        }
    }
}