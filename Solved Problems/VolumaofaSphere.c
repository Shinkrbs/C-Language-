#include <stdio.h>
#include <math.h>

//create a program that computes the volume of a sphere.
//using formula: (4.0 / 3.0) * pi * pow(radius, 3);

float calculation(float radius)
{
    float v;
    float pi = 3.141592653589793;

    v = (4.0 / 3.0) * pi * pow(radius, 3);

    return v;
}

int main()
{
    float radius;

    printf("Input Radius: ");
    scanf("%f", &radius);

    float v = calculation(radius);

    printf("The Volume of the Sphere: %.2f", v);

    return 0;
}