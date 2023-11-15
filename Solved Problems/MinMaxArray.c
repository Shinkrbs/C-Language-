#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Display the smallest and largest value in an array
//Array size is 10;

int main()
{
    int arr[10];
    srand(time(NULL));

    //For Array Values
    printf("Array Values:\n");
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 101; //Make random numbers upto 100
        printf("%d ", arr[i]);
    }

    int largest = arr[0];
    int smallest = arr[0];
    
    //Compare Values
    for (int j = 0; j < 10; j++)
    {
        if (arr[j] > largest)
        {
            largest = arr[j];
        }

        if (arr[j] < smallest)
        {
            smallest = arr[j];
        }
    }

    printf("\nLargest Value in Array: %d", largest);
    printf("\nThe Smallest Value in Array: %d", smallest);
    
    return 0;
}