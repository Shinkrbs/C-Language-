#include <stdio.h>

int main()
{
    int element[] = {1, 23, 9, 10, 2, 19, 100, 35, 78, 200, 76, 300, 400};
    int largestNum = 0;

    //To avoid making of garbage values 
    int limit = sizeof(element) / sizeof(int) - 1; //By this we can identify the limit even if arrays size is not determined

    for (int i = 0; i < limit; i++) //itterate through the values
    {
        if (element[i] > largestNum)
        {
            largestNum = element[i];
        }
    }
    
    printf("The Largest Number in the Array: %d", largestNum);

    return 0;
}