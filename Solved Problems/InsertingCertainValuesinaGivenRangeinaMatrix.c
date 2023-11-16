#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mainArr[10][10] = {0};
    int subArr[5][5];
    srand(time(NULL));

    //Main arr
    printf("Matrix:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", mainArr[i][j]);
        }
        printf("\n");    
    }

    //Sub Array
    printf("\nSub Array:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            subArr[i][j] = rand() % 51;
            printf("%d ", subArr[i][j]);
        }
        printf("\n");
    }
    
    //Insert Sub Array to Main Array
    int row, col;

    printf("\nInput Row: ");
    scanf("%d", &row);
    printf("Input Column: ");
    scanf("%d", &col);

    if (row <= 0 || col <= 0 || row > 10 || col > 10)
    {
        printf("Invalid Input! Exiting..");
        return 1;
    }

    if (row >= 7 && col >= 0 || col > 6) 
    {
        printf("Values Will Not Fit in Columns! Exiting..");
        return 1;
    }
    

    printf("\nInserted Values:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mainArr[row + i - 1][col + j - 1] = subArr[i][j];
        }
    }
    
     for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", mainArr[i][j]);
        }
        printf("\n");    
    }

    return 0;
}