#include <stdio.h>

//Create a program to find the third angle of a triangle if first and second angle is given

int find_thirdAngle(int ang1, int ang2)
{

    int ang3 = 180 - (ang1 + ang2);

    return ang3;
}

int main()
{
    int ang1, ang2;

    printf("Input Angle 1 and Angle 2 seperated by comma: ");
    scanf("%d, %d", &ang1, &ang2);

    int ang3 = find_thirdAngle(ang1, ang2);

    printf("Value of Third Angle: %d", ang3);

    return 0;
}