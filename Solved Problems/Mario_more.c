#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Input Height: ");

        if (height <= 0)
        {
            printf("Input a Number Greater than 0!\n");
            height = get_int("Input Height: ");
        }

        if (height > 8)
        {
            printf("Input a Number Less than 8!\n");
        }
    }
    while (height > 8);

    // For Pattern
    for (int i = 1; i <= height; i++)
    {
        // for left side
        for (int space = height - 1; space >= i; space--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }

        // for right side
        for (int middleSpace = 1; middleSpace <= 2; middleSpace++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}