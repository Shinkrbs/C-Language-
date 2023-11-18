#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Declare an arr with 15 elements and initial values according to your preference
//Well ordered num means the digit within the num is well ordered
//Print arr
//Determine and count well-ordered nums on the arr
//print results

int wellOrd(int currNum);

int main()
{
    srand(time(NULL));
    int mainArr[15];

    //Main Array
    printf("Array:\n");
    for (int i = 0; i < 15; i++)
    {
        mainArr[i] = rand() % 1001;
        printf("%d ", mainArr[i]);
    }

    //Count
    int count = 0;

    printf("\nWell Ordered Numbers:\n");
    //Iterate through mainArr
    for (int i = 0; i < 15; i++)
    {
        if (wellOrd(mainArr[i]) == 0) //This means that for every digit in the index of mainArr it will be check if well ordered
        {
            printf("%d ", mainArr[i]);
            count++;
        }
    }
    
    //Print Count:
    printf("\nCount of Well-Ordered Numbers: %d", count);

    return 0;
}

int wellOrd(int currNum)
{
    //Prepare previous digit for iteration

    if (currNum < 10) //Single Digits are always a well ordered num
    {
        return 0;
    }

    else
    {
        int prevDigit = currNum % 10;
        currNum /= 10;

            while (currNum != 0)
            {
                int currDigit = currNum % 10;

                if (prevDigit < currDigit)
                {
                    return 1;
                }

                prevDigit = currDigit;
                currNum /= 10;
            }
    }
    return 0;
}