#include <stdio.h>

//Make a program that will identify whether a number is odd or even without using division or modulu

int main()
{
    int num;

    printf("Input Number: ");
    scanf("%d", &num);

    while (num >= 2)
    {
        num = num - 2;
    }
    
    if (num == 2 || num == 0)
    {
        printf("\nEven!");
    }
    else
    {
        printf("\nOdd!");
    }
    
    return 0;
}