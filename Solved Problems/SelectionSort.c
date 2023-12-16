#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArr(int a[], int s);
void randInt(int a[], int s);
void selectionSort(int a[], int s);

int main()
{
    srand(time(NULL));
    int a[10];
    int s = sizeof(a) / sizeof(a[0]);

    printf("Unsorted Array:\n");
    randInt(a, s);
    printf("Selections sorted Array:\n");
    selectionSort(a, s);
    printArr(a, s);

    return 0;
}

void printArr(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void randInt(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        a[i] = rand() % 26;
    }
    printArr(a, s);
}

void selectionSort(int a[], int s)
{
    for (int i = 0; i < s - 1; i++)
    {
        int min = i;
        //Find the index of the minimum element
        for (int j = i + 1; j < s; j++)
        {
           if (a[j] < a[min])
           {
                min = j;
           }
        }
        //Swap the found minimum element with the first element
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}