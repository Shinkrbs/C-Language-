#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Print Prime Numbers in a random range

int main()
{
    int number = 2;
    srand(time(NULL));
    int range = rand() % 501; //Generate random numbers upto 500

    printf("Range: %d\n", range);
    
    while (number < range)
    {
        int flag = 1;

        if (number <= 1)
        {
            flag = 0;
            break;
        }
        
        for (int i = 2; i * i <= number; i++)
        {
            if (number % i == 0)
            {
                flag = 0;
                break;
            }
        }
        
        if (flag)
        {
            printf("%d ", number);
        }
    
        number++;
    }
    
    
    return 0;
}