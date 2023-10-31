
// Write a C Program to ask the coefficients of a and b, then constant c. 
// After That display the real values of x (if there are any) based on the D (Discriminant) value.
// General Formula: x = (-b) * sqrt(pow(b, 2) - (4 * a * c)) / 2 * a

#include <stdio.h>
#include <math.h>

int main(void)
{
    // Variables
    float a, b, c;
    float d; // Discriminant
    float x1, x2;
    
    // User Input
    printf("Input Coefficient A: ");
    scanf("%f", &a);
    printf("Input Coefficient B: ");
    scanf("%f", &b);
    printf("Input Coefficient C: ");
    scanf("%f", &c);

    // Formula for Discriminant
    d = pow(b, 2) - (4 * a * c);

    // Print Discriminant
    printf("\nDiscriminant: %f", d);

    // Conditions
    if (d > 0)
    {
        // There are two distinct values for x (x1, x2)
        // Positive / Negative

        // Formula for x1, x2
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);

        // Output
        printf("\n\nD (Discriminant) > 0");
        printf("\n\nThere Are Two Distinct Values For x.");
        printf("\nTwo Distinct Values: ");
        printf("\nx1 = %f", x1);
        printf("\nx2 = %f", x2);
        
    }
    else if (d == 0)
    {
        // One Real Solution for x (x1)

        // Formula for x1
        // sqrt(d) not included since d = 0
        x1 = -b / (2 * a);

        // Output
        printf("\n\nD (Discriminant) = 0");
        printf("\n\nThere Is Only One Value For x.");
        printf("\nOne Real Solution:");
        printf("\nx = %f", x1);

    }
    else 
    {
        // if d < 0, No Value For x

        // Output
        printf("\n\nD (Discriminant) < 0");
        printf("\nThere Is No Real Value For x.");

    }
    
    return 0;
}