// Problem: Write A C code that would ask for t in year(s) as input and produce the P(t) as output.
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Variables
    int t; //Years
    int Pt; //P(t)

    //User Input
    printf("Input Year(s): ");
    scanf("%d", &t);

    //Formula
    Pt = 100 * (1 - exp(-0.1 * t));

    //Output
    printf("P(t) = %d", Pt);

    return 0;
}
