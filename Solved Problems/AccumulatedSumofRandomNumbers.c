#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Instructions:
//Initialize a static array with a size of 50
//Initialize a random number from 0- 20
//Create another array using the same numbers of element from the random numbers array get the accumulated sum
//Another array must be the same size (50 - 1)
//Display Random array
//Display the sum of every index

int main()
{
    int randomNum[50];
    time_t t;

    //For Random Numbers
    srand(time(&t));

    printf("Random Numbers:\n");
    for (int i = 0; i < 50; i++)
    {
        randomNum[i] = rand() % 21;
        printf("%d ", randomNum[i]);
    }

    //For Sumation
    int sumation[50];
    sumation[0] = randomNum[0];

    printf("\n\nAccumulated Sum:\n");
    printf("%d ", sumation[0]);

    for (int j = 1; j < 50; j++)
    {
        sumation[j] = randomNum[j] + randomNum[j - 1];
        randomNum[j] = sumation[j];
        printf("%d ", sumation[j]);
    }

    return 0;
}