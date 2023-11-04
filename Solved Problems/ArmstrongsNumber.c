#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//Make a program that will identify whether a number is an armstrong number or not

bool armstrongNum(int n) 
{
    int booleanNum = n;
    int temp = n;
    int sum = 0;
    int digitPow = 0;
    int digit = 0;
    int power = 0;

    //Count the number of digits to obtain power 
    while (temp != 0)
    {
        temp /= 10;
        power++;
    }

    printf("Number of Digits: %d", power);
    printf("\n");
    printf("Values: ");
    
    //extract the digits of num and raise the nums by 3
    while (n != 0)
    {
        digit = n % 10; //Extract the digit from the number 
        
        //idk why but when 5 is input the pow to 3 is 124 kulang hin 1 so yeah I added 1
        if (digit == 5)
        {
            digitPow = pow(digit, power) + 1;
        }
        else
        {
            digitPow = pow(digit, power);
        }
        
        sum += digitPow;
        n /= 10;
        printf("%d ", digitPow);
    }

    printf("\nSum: %d\n", sum);
    
    //Return boolean statement if true or false
    //I tried this because it was in my tiktok feed for idk how many times na
    return (sum == booleanNum) ? printf("An Armstrong Number!") : printf("Not An Armstrong Number!"); //Ternary Operator
}

int main()
{
    int n;
    
    printf("Input Number: ");
    scanf("%d", &n);

    armstrongNum(n);
    
    return 0;
}