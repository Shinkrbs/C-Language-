#include <stdio.h>

//Practicing more complex projects!
//Mass, Density, Volume Calculator with User Input!

int main (){

    char name[100];
    char selection;
    double mass;
    double volume;
    double density;
    double length;
    double width;
    double height;


    printf("Input Name:");
    scanf("%s", name);
    printf("Hello %s! What do you want me to calculate?", name);
    printf("\nPlease Input/Select; Mass (m), Density (d), Volume(V):");
    scanf("%s", &selection);


    if (selection == 'm' || selection == 'M')
    {
        printf("Mass Conversion:");
        printf("\nInput Density:");
        scanf("%lf", &density);
        printf("Input Volume:");
        scanf("%lf", &volume);

        mass = density * volume;
        
        printf("\nMass: %.1lf kg", mass);
    }
    else if (selection == 'd')
    {
        printf("Density Conversion:");
        printf("\nInput Mass:");
        scanf("%lf", &mass);
        printf("Input Volume:");
        scanf("%lf", &volume);

        density = mass / volume;

        printf("\nDensity: %.1lf g/cm^3", density);
    }
    else if (selection == 'V')
    {
        printf("Volume Conversion:");
        printf("\nInput Length:");
        scanf("%lf", &length);
        printf("Input Width:");
        scanf("%lf", &width);
        printf("Input Height:");
        scanf("%lf", &height);

        volume = length * width * height;

        printf("\nVolume: %.1lf m^3", volume);
    }
    else
    {
        printf("\n%s is an invalid input.");
    }


    return 0;
}