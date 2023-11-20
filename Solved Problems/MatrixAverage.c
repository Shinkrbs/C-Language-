#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int arr[3][3];
    float avCol[3] = {0};
    float avRow[3] = {0};

    //Random Values
    printf("Array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = rand() % 6;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    //Get Sum for Rows and Columns
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            avCol[j] += arr[i][j];
            avRow[i] += arr[i][j];
        }
    }
    
    //Average
    printf("\nColumns Average:\n");
    for (int i = 0; i < 3; i++)
    {
        avCol[i] /= 3.0;
        printf("%.2f ", avCol[i]);
    }
    
    printf("\nRow Average:\n");
    for (int j = 0; j < 3; j++)
    {
        avRow[j] /= 3.0;
        printf("%.2f ", avRow[j]);
    }
    
    return 0;
}