#include <stdio.h>

int main()
{
    int year;

        printf("Input Year: ");
        scanf("%d", &year);

        if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        {
            printf("%d is a Leap Year!", year);
        }

        if (year % 100 == 0 && year % 400 != 0 || year % 4 != 0)
        {
            printf("%d is not a Leap Year.", year);
        }

    return 0;
}