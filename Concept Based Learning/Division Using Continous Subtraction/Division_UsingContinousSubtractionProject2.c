#include <stdio.h>

int main (void){

//Problem 2 w/ implementation of sir regis rules/instructions

    int dividend, divisor;
   
    printf("Input Dividend: ");
    scanf("%d", &dividend);
    printf("Input Divisor: ");
    scanf("%d", &divisor);

    //if want more features
    
    /*if (dividend == 0)
    {
        printf("Error, Division By Zero Is Not Allowed! ");
        return 1;
    }

   if (dividend < divisor)
    {
        printf("Error, Does Not Support Integer Division.");
        return 1;
    }
    */

    int pq = 0;
    int r = dividend;


    while (r >= divisor)
    {
        r = r - divisor;
        pq += 1; // or q++; to simply increment
    }
    
    printf("\nResults;");
    printf("\nQuotient: %d", pq);
    printf("\nRemainder: %d", r);
    
    return 0;
}