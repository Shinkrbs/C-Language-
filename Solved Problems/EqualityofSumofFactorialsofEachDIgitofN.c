#include <stdio.h>

int main()
{
    int num;
    int output = 0;

    printf("Input Number: ");
    scanf("%d", &num); 

    for (int x = num; x > 0; x /= 10)//will divide the num for every iteration to get digits
    {
        int temp = 1;
        int y = x % 10; //This will get the digits

        for (int i = y; i > 1; i--)//To get factors of num for each iteration
        {
            temp *= i;//To multiply each factorial of digit of num
        }
        output += temp; //Add the sum of each iteration of each factorial of the digit of num
    }
    
    //To check the equality of the sums of factorials of each digit of N
    if (output == num)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}