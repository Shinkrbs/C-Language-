#include <stdio.h>
int main()
{
    int limit;

    printf("Input Num: ");
    scanf("%d", &limit);

    for (int j = 1; j <= limit; j++)
    {
        int num = 1 * j;

        if (num % 3 == 0)
        {
            continue;
        }

        else
        {
            printf("%d ", num);
        }
    }
    printf("\n");
}
