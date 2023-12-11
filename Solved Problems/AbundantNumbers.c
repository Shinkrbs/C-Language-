#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randLim();
int getSumofDiv(int num);
void abundantNum(int lim);
void printAbdNum(int abdNum[], int s);

int main()
{
    int lim = randLim();
    abundantNum(lim);
    return 0;
}

int randLim()
{
    time_t t;
    srand((unsigned)time(&t));
    int lim = rand() % 100;
    return lim;
}

int getSumofDiv(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i ==0)
        {
            sum += i;
        }
    }
    return sum;
}

void abundantNum(int lim)
{
    int *abdNum;
    int s = lim;
    abdNum = (int*)calloc(s, sizeof(int));
    for (int i = 1, ctr = 0; ctr < lim; i++)
    {
        if (getSumofDiv(i) > i * 2)
        {
            abdNum[ctr] = i;
            ctr++;
        }
    }
    printAbdNum(abdNum, s);
}

void printAbdNum(int abdNum[], int s)
{
    printf("First %d Abundant Numbers:\n", s);
    for (int i = 0; i < s; i++)
    {
        printf("%d ", abdNum[i]);
    }
    free(abdNum);
}