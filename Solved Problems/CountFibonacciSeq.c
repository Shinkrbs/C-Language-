#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isFib(int x);
int printArray(int a[], int s);
int fibCtr(int a[], int s);

int main()
{
    int a[7];
    int s = sizeof(a) / sizeof(int);

    printArray(a, s);

    printf("\nFibbonacci Numbers in Array: %d", fibCtr(a, s)); 
    return 0;
}

int isFib(int x)
{
    int first = 0, sec = 1, third = 0;

    while(third < x)
    {
        third = first + sec;
        first = sec;
        sec = third;
    }

    if (x == third || x == 0)
    {
        return 1;
    }
    return 0;
}

int printArray(int a[], int s)
{
    time_t t;
    srand((unsigned)time(&t));

    printf("Array Content: ");
    for (int i = 0; i < s; i++)
    {
        a[i] = rand() % 51;
        printf("%d ", a[i]);
    }
    return 0;
}

int fibCtr(int a[], int s)
{
    int count = 0;
    for (int i = 0; i < s; i++)
    {
        if (isFib(a[i]) == 1)
        {
            count++;
        }
    }
    return count;
}