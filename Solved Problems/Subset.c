#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *initDynArrRand (int p);
void dispArr(int *var, int s);
int countSubArr (int *x, int sX, int *y, int sY);

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int sX, sY;

    printf("Input Sizes of Array X and Y: ");
    scanf("%d %d", &sX, &sY);

    int *x = initDynArrRand(sX);
    int *y = initDynArrRand(sY);

    printf("Array X:\n");
    dispArr(x, sX);
    printf("Array Y:\n");
    dispArr(y, sY);
    printf("Count of X as a Subset of Y: %d", countSubArr(x, sX, y, sY));

    free(x);
    free(y);
    return 0;
}

int *initDynArrRand (int p)
{
    int *arr = (int*)calloc(p, sizeof(int));

    for (int i = 0; i < p; i++)
    {
        arr[i] = rand() % 10;
    }
    return arr;
}

void dispArr(int *var, int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d ", var[i]);
    }
    printf("\n");
}

int countSubArr (int *x, int sX, int *y, int sY)
{
    int count = 0;
    for (int i = 0; i < sY - sX + 1; i++)
    {
        int match = 1;
        for (int j = 0; j < sX; j++)
        {
            if (x[j] != y[i + j])
            {
                match = 0;
                break;
            }
        }

        if (match)
        {
            count++;
        }
    }
    return count;
}