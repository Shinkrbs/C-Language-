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

    // For Left-Alligned Pyramid
    /*for (int k = 1; k <= height; k++)
    {
        for (int l = 1; l <= k; l++)
        {
            printf("#");
        }
        printf("\n");
    }*/

    // For Right-Alligned Pyramid
    for (int i = 1; i <= height; i++)
    {

        for (int dots = height - 1; dots >= i && dots >= 0; dots--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}