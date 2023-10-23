#include <stdio.h>

int main()
{
    int n = 1;
    int limit = 100;

    while (n <= limit)
    {
        if (n % 2 != 0)
        {
            printf("%d, ", n);
            n++;
        }
        else
        {
            n++;
        }
        
    }
    return 0;
}