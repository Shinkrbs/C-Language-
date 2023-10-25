#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int startPopulation;
    int endPopulation;
    int born = 0;
    int death = 0;
    int growthRate = 0;
    int years = 0;

    // TODO: Prompt for start size

    startPopulation = get_int("Enter Start Size: ");

    if (startPopulation < 9)
    {
        printf("Input is Under Allowed Population!");

        do
        {
            startPopulation = get_int("\nEnter Start Size: ");
        }
        while (startPopulation < 9);
    }

    // TODO: Prompt for end size

    endPopulation = get_int("Enter End Size: ");

    if (endPopulation < startPopulation)
    {
        printf("Input is Lower Than Start Population!");

        do
        {
            endPopulation = get_int("\nEnter End Size: ");
        }
        while (endPopulation < startPopulation);
    }

    // TODO: Calculate number of years until we reach threshold
    if (startPopulation == endPopulation)
    {
        years = 0;
    }

    if (endPopulation > startPopulation)
    {
        while (growthRate < endPopulation)
        {
            born = startPopulation / 3;
            death = startPopulation / 4;
            growthRate = startPopulation + born - death;

            startPopulation = growthRate;
            years++;
        }
    }

    // TODO: Print number of years
    printf("Years: %d\n", years);

    return 0;
}