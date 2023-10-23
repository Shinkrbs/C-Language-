#include <stdio.h>

int main()
{

    int n;
    int limit;
    int sum = 0;

    printf("Input Limit: ");
    scanf("%d", &limit);

    for (n = 1; n <= limit; n++)
    {
        if (n % 2 != 0)
        {
            printf("%d,", n);
            sum += n;
        }   
    }
    
    printf("\nSum of Odd Numbers: %d", sum);

    return 0;
}