#include <stdio.h>
#include <math.h>

int main(void)
{
    //Variables
    int t; //Time (in seconds)
    float Ct; //C(t)

    //Tip from Kuya: Use Variable Names that are easy to read
    //eg: numVariable (example of camel casing)
    //Camel Casing is two words combines where the first word is small and the next words first letter is capital
    

    //User Input
    printf("Input Seconds: ");
    scanf("%d", &t);

    //Conditions / Formulas
    if (0 <= t && t <= 20)
    {
        Ct = (0.3 * t) - 18 * (1 - exp(-t / 60));

        printf("Cocentration of a Drug in an Organ at Anytime if 0 <= t & t <= 20: %f ", Ct);
    }
    else if (t > 20)
    {
        Ct = 18 * exp(-t / 60) - 12 * exp(-(t - 20) / 60);

         printf("Concentration of a Drug in an Organ at Anytime if t > 20: %f ", Ct);
    }
    else
    {
        printf("Invalid.");
    }

    return 0;
}