#include <stdio.h>

int main(void){

    //Practice odd numbers
    //Problem: Code a set of odd numbers that will add up to 100

    int odd_number = 1;
    int sum = 0;

    printf("The Odd Numbers That Add up to 100: ");

    while (sum < 100) // used to loop the condition until the value is == 100
    { //nested loop
        if (sum + odd_number <= 100) // used to not let the value exceed 100
        {
            printf("%d, ", odd_number); // the program prints the current odd_number 
            sum += odd_number; // updates the sum by adding the odd_number
        }
        
         odd_number += 2; // this increment the value of odd_number to another odd no.
    }

    printf("\nTotal Sum: %d", sum); // displays the total sum

    return 0;
}