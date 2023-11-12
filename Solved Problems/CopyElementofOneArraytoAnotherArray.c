#include <stdio.h>

//make source array and target array
//iterate through the source array and for every index initialize the value of that index to the target array index

int main()
{
    int sourceArray[] = {15, 10, 12, 15, 16, 19, 29};
    int size = sizeof(sourceArray) / sizeof(int);
    int targetArray[size];
    
    //To initialize values of source array to target array
    printf("The Stored Values in Source Array:\n");

    for (int i = 0; i < size; i++)
    {
        targetArray[i] = sourceArray[i];
        printf("%d ", sourceArray[i]);
    }

    //To print values
    printf("\nThe Copied Elements:\n");

    for (int j = 0; j < size; j++)
    {
        printf("%d ", targetArray[j]);
    }
    
    return 0;
}