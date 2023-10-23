#include <stdio.h>
//Calculator Project!
int main(void){

    char operator;
    double num1;
    double num2;
    double result;
    int pq = 0;

    printf("Calculator:");

    printf("\nWhat Operation Would You Like To Use?(+ - / *):");
    scanf("%c", &operator);


    if (operator == '+')
    {
        printf("\nThe Operation is set to Addition:");
        printf("\nInput Number 1: ");
        scanf("%lf", &num1);
        printf("Input Number 2: ");
        scanf("%lf", &num2);

        result = num1 + num2;

        printf("\nSum: %.1lf", result);
    }
    else if (operator == '-')
    {
        printf("\nThe Operation is set to Subtraction:");
        printf("\nInput Number 1: ");
        scanf("%lf", &num1);
        printf("Input Number 2: ");
        scanf("%lf", &num2);

        result = num1 - num2;

        printf("\nDifference: %.1lf", result);
    }
      else if (operator == '*')
    {
        printf("\nThe Operation is set to Multiplication:");
        printf("\nInput Number 1: ");
        scanf("%lf", &num1);
        printf("Input Number 2: ");
        scanf("%lf", &num2);

        result = num1 * num2;

        printf("\nProduct: %.1lf", result);
    }
    else if (operator == '/')
    {
        printf("\nThe Operation is set to Division:");
        printf("\nInput Number 1: ");
        scanf("%lf", &num1);
        printf("Input Number 2: ");
        scanf("%lf", &num2);

        if (num1 == 0)
        {
            printf("\nInvalid Input.");
            return 1;
        }
        else if (num1 >= num2)
        {
             while (num1 >= num2)
        {
            num1 = num1 - num2;
            pq++;
        }
        }
        
        printf("\nQoutient: %d", pq);
        printf("\nRemainder: %.1lf", num1);
    }
    else 
    {
        printf("\n%s is not a valid operator.");
    }
    

    return 0;
}