#include <stdio.h>

//make array
//iterate through values of array
//add the value of each index of array in each iteration

int main()
{
    int element[] = {2, 5, 8};
    int size = sizeof(element) / sizeof(int);
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += element[i];
    }

    printf("Sum of elements of Array is: %d", sum);
    

    return 0;
}