#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Initialize arrays[source, odd, even]
//Segregate values from odd to even
//Use random integers

int main()
{
    int sourceArray[5][5];
    int oddArray[5][5];
    int evenArray[5][5];
    srand(time(NULL));

    //For Random Integers
    printf("Values: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
           sourceArray[i][j] = rand() % 101;
           printf("%d ", sourceArray[i][j]);
        }
        printf("\n");
    }

    //For Odd
    printf("\nOdd Values in the Array:\n");
    for (int k = 0; k < 5; k++)
    {
        for (int l = 0; l < 5; l++)
        {
            if (sourceArray[k][l] % 2 != 0)
            {
                oddArray[k][l] = sourceArray[k][l];
                printf("%d ", oddArray[k][l]);
            }  
        }
    }

    //For Even
    printf("\nEven Values in the Array:\n");
    for (int m = 0; m < 5; m++)
    {
        for (int n = 0; n < 5; n++)
        {
            if (sourceArray[m][n] == 0)
            {
                break;
            }
            
            else if (sourceArray[m][n] != 0 && sourceArray[m][n] % 2 == 0)
            {
                evenArray[m][n] = sourceArray[m][n];
                printf("%d ", evenArray[m][n]);
            }  
        }
    }
    
    return 0;
}