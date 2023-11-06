#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int size;

    printf("Input Size: ");
    scanf("%d", &size);

    time_t t;
    srand((unsigned) time(&t));

    for (int sizeMax = 1; sizeMax <= size; sizeMax++)
    {
        //To generate random number for each iteration until size is satisfied

        int x = rand();
        printf("%d : ", x);
        
        //To find integer logarithm

        int exp = 0;
        int num = x; //Num will get the random number from the random seed/number to be the value for the random logarithm integer
        
        //Continous Division 

        while (num > 1)
        {
            num /= 2; //Division arithmetic
            exp++; //For each iteration the exp or exponent will be incremented to be the value for exponent which will be the anser for the integer base 2 logarithm.
        }

        printf("%d\n", exp);

    }
    
    return 0;
}