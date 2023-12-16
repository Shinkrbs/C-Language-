#include <stdio.h>
#include <stdlib.h>

int* sortedOddsAndEvens(int odd[], int even[], int s);
void dispArr(int *arr, int s);

int main()
{
    int odd[5] = {1,5,7,9,11};
    int even[5] = {2,4,6,8,10};
    int s = sizeof(odd) / sizeof(int);

    int *sort = sortedOddsAndEvens(odd, even, s);
    dispArr(sort, s + s);

    free(sort);
    return 0;
}

int* sortedOddsAndEvens(int odd[], int even[], int s)
{
    int *arr = (int*)calloc(s + s, sizeof(int));
    for (int i = 0, j = 0, h = 1; i < s; i ++, j += 2, h += 2)
    {
        arr[j] = odd[i];
        arr[h] = even[i];
    }
    //Sort array here
    for (int k = 0; k < s + s; k++)
    {
        for (int l = k + 1; l < s + s; l++)
        {
            if (arr[k] > arr[l])
            {
                int temp = arr[k];
                arr[k] = arr[l];
                arr[l] = temp;
            }
        }
    }
    return arr;
}

void dispArr(int *arr, int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
}