//Problem: Rising Median of United States

#include <stdio.h>
#include <math.h>

int main(void)
{

    //Variables
    int tDecades; //Input Decades from 1946 to 1965
    double risingMedian; //f(t)

    //Input Decades
    printf("Input Decade: ");
    scanf("%d", &tDecades);

    //Conditions and Formula
    if (0 <= tDecades && tDecades <= 3)
    {
        risingMedian = 1.3 * tDecades + 22.9;

        printf("Rising Median Age in the USA: %.3lf", risingMedian);
    }
    
    else if (3 < tDecades && tDecades <= 7)
    {
        risingMedian = -0.7 * pow(tDecades, 2) + 7.2 * tDecades + 11.5;

        printf("Rising Median Age in the USA: %.3lf", risingMedian);
    }
    else if (7 < tDecades && tDecades <= 10)
    {
        risingMedian = 2.6 * tDecades + 9.4;

        printf("Rising Median Age in the USA: %.3lf", risingMedian);
    }
    else
    {
        printf("Invalid.");
    }

    return 0;
}