#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Add two matrices and display their sum A + B = C
//2d Array

int main()
{
    int a[5][4], b[5][4], c[5][4];

    srand(time(NULL));

    //For Matrix A
    printf("Matrix A:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            a[i][j] = rand() % 101;
            printf("%d ", a[i][j]);
        } 
        printf("\n");
    }

    //For Matrix B
    printf("\nMatrix B:\n");
    for (int k = 0; k < 5; k++)
    {
        for (int l = 0; l < 4; l++)
        {
            b[k][l] = rand() % 101;
            printf("%d ", b[k][l]);
        }
        printf("\n");        
    }

    //Sum of Two Matrices
    printf("\nSum of Matrix A and B:\n");
    for (int m = 0; m < 5; m++)
    {
        for (int n = 0; n < 4; n++)
        {
            c[m][n] = a[m][n] + b[m][n];
            printf("%d ", c[m][n]);
        }
        printf("\n");
    }
    
    return 0;
}