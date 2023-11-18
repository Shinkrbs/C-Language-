#include <stdio.h>

//iterate from 1 to 99999
//count the chain
//take note of longest chain by comparing count
//3n + 1 for odd and divide two for even

int main()
{
    long long int limit = 1000000;
    long long int longChain = 0;
    long long int longCount = 0;
    
    for (long long int i = 1; i < limit; i++)
    {
        long long int count = 0;
        long long int num = i;

        while (num != 1)
        {
            if (num % 2 != 0)
            {
                num = (3 * num) + 1;
                count++;
            }
            else
            {
                num /= 2;
                count++;
            }
        }

        if (count > longCount)
        {
            longCount = count;
            longChain = i;
        }
    }

    printf("Starting Number with the Longest Chain: %lld", longChain);
    printf("\nCount of Chain: %lld", longCount);
    
    return 0;
}