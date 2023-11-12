/* Problem: If we list all the natural numbers below 10 that are multiples of 3
or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. 
Find the sum of all the multiples of 3 or 5 below 1000. */

#include <stdio.h>

int main() {
    //Variables
    int limit = 1000;
    int sum = 0;

    //Loop to itterate multiples of 3 and 5
    for (int i = 1; i < limit; i++) //This code inputs a value for multiples(i) and checks if i < limit and increments i
    {
        if (i % 3 == 0 || i % 5 == 0) // Checks if the value of i is divisible by 3 or 5
        {
            sum += i; //If true, the divisible value of 3 or 5 will be accumulated to the sum variable
        }
    }

    //Display Outpue
    printf("Sum of multiples of 3 or 5 below 1000: %d\n", sum);

    return 0;
}

//To Check if a number is divisible to a number use (n % n == 0)
//If the result is 0, then it is divisible by that number
//Else, if the result of the result is 1 it is not divisible