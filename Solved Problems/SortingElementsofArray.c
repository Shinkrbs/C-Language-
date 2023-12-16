#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Bubble Sort?
void randInt(int arr[], int s);
void printArr(int arr[], int s);
void sort(int arr[], int s);

int main()
{
    int arr[20];
    int s = sizeof(arr)/sizeof(int);

    printf("Original Values of Array:\n");
    randInt(arr, s);

    printf("\nSorted Values of Array:\n");
    sort(arr, s); //Call sorting function
    return 0;
}

void randInt(int arr[], int s)
{
    srand(time(NULL));
    for (int i = 0; i < s; i++)
    {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }
}

void printArr(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
}

void sort(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        for (int j = i + 1; j < s; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp =  arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }   
        } 
    }
    printArr(arr, s);
}