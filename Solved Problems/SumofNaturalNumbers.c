#include <stdio.h>

int main()
{
    int n;
    int limit = 10;
    int sum = 0;

    for (n = 1; n <= limit; n++)
    {
        sum += n;
    }
    
    printf("%d", sum);
    
    return 0;
}