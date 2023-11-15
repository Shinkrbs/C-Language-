#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//make an array with random integers
//Find the frequency of each number in the array
//Print the frequency

int main()
{
    int array[5][5];
    srand(time(NULL));

    //To put values in the array
    printf("Array: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = rand() % 101;
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    //Count Frequency
    //Make another array to store frequency of each of the number in the other array
    int frequency[101] = {0}; //size of array is the random numbers max int 
    printf("\nNumber Of Occurences in the Matrix:\n");
    for (int k = 0; k < 5; k++)
    {
        for (int l = 0; l < 5; l++)
        {
           frequency[array[k][l]]++; //The frequency has zeros in it therefore for every same value it will increment
           //This expression accesses a certain index from frequency array if two values in the array array is the same
           printf("%d ", frequency[array[k][l]]); //Print the number of occurences from the accessed value in the array array to frequency array
        }
        printf("\n");
    }

    //Printing Frequency
    printf("\nFrequency:\n");
    for (int m = 0; m < 101; m++) 
    {
        if (frequency[m] != 0)
        {
            printf("%d Occurs %d Times\n", m, frequency[m]);
        }
    }
    
    return 0;
}