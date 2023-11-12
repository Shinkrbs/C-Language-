#include <stdio.h>

int main()
{
    int element[] = {9, 4, 6, 358, 12203, 4364, 432, 23, 4};
    int size = sizeof(element) / sizeof(int) - 1;
    int largestNum = 0, smallestNum = element[0]; //the smallest num is set to index 0 so that the lowest values will always iterate from the values of tha array

    for (int i = 0; i < size; i++)
    {
        if (element[i] > largestNum)
        {
            largestNum = element[i];
        }
        
        if (element[i] < smallestNum)
        {
            smallestNum = element[i];
        }
    }

    printf("Largest Number in the Array: %d\n", largestNum);
    printf("Smallest Number in the Array: %d", smallestNum);
    
    return 0;
}