#include <stdio.h>

//Making A More Interactive Calculator!
int main(void)
{

    //Variables
    char selection;
    char selection2;
    char selection3;
    char selection4;
    char selection5;

    int num1;
    int num2;
    int result1;
    int pq = 0;
    int dividend1;
    int divisor1;

    float dividend2;
    float divisor2;
    float num3;
    float num4;
    float result2;
   
   
   //First Display Output
    printf("\t---------Calculator---------\n");
    printf("\n\t=----Select Operation----=\n");
    printf("\nA. Addition (+)");
    printf("\nB. Subtraction (-)");
    printf("\nC. Multiplication (*)");
    printf("\nD. Division (/)");
    printf("\n\nInput Selection: ");
        scanf("%c", &selection);
    
    //Addition
    if (selection == 'A' || selection == 'a')
    {
        printf("\n\n--The Operation Is Set To Addition--");
        printf("\n--Select Type Of Addition--");
        printf("\n\nA. Whole Number");
        printf("\nB. Decimal");
        printf("\n\nInput Selection: ");
            scanf("%s", &selection4);
        
        while (selection4 == 'A' || selection4 == 'B' || selection4 == 'a' || selection4 == 'b')
        {
            if (selection4 == 'A' || selection4 == 'a')
            {
                printf("\n--Addition Is Set To Whole Number--");
                printf("\n\nInput Number 1: ");
                    scanf("%d", &num1);
                printf("Input Number 2: ");
                    scanf("%d", &num2);
        
                result1 = num1 + num2;

                printf("Sum: %d", result1);

                return 1;
            }
            
            else if (selection4 == 'B' || selection4 == 'b')
            {
                printf("\n--Addition Is Set To Decimal--");
                printf("\n\nInput Number 1: ");
                    scanf("%f", &num3);
                printf("Input Number 2: ");
                    scanf("%f", &num4);
        
                result2 = num3 + num4;

                printf("Sum: %.3f", result2);

                return 1;
            }
        }
    }

    //Subtraction
    else if (selection == 'B' || selection == 'b')
    {
        printf("\n\n--The Operation Is Set To Subtraction--");
        printf("\n--Select Type of Subtraction--");
        printf("\n\nA. Whole Number");
        printf("\nB. Decimal");
        printf("\n\nInput Selection: ");
            scanf("%s", &selection2);
        
        while (selection2 == 'A' || selection2 == 'B' || selection2 == 'a' || selection2 == 'b')
        {
            if (selection2 == 'A' || selection2 == 'a')
            {
            printf("\n--Subtraction Is Set to Whole Number--");
            printf("\n\nInput Number 1: ");
                scanf("%d", &num1);
            printf("Input Number 2: ");
                scanf("%d", &num2);

            result1 = num1 - num2;

            printf("Difference: %d", result1);

            return 1;
            }

            else if (selection2 == 'B' || selection2 == 'b')
            {
            printf("\n--Subtraction Is Set to Decimal--");
            printf("\n\nInput Number 1: ");
                scanf("%f", &num3);
            printf("Input Number 2: ");
                scanf("%f", &num4);

            result2 = num3 - num4;

            printf("Difference: %.3f", result2);

            return 1;
            }
        } 
    }

    //Multiplication
    else if (selection == 'C' || selection == 'c')
    {
        printf("\n\n--The Operation Is Set To Multiplication--");
        printf("\n--Select Type Of Multiplication--");
        printf("\n\nA. Whole Number");
        printf("\nB. Decimal");
        printf("\n\nInput Selection: ");
            scanf("%s", &selection3);

        while (selection3 == 'A' || selection3 == 'B' || selection3 == 'a' || selection3 == 'b')
        {
            if (selection3 == 'A' || selection3 == 'a')
            {
                printf("\n--Multiplication Is Set To Whole Number--");
                printf("\n\nInput Number 1: ");
                    scanf("%d", &num1);
                printf("\nInput Number 2: ");
                    scanf("%d", &num2);

                result1 = num1 * num2;

                printf("\nProduct: %d", result1);

                return 1;
            }
            else if (selection3 == 'B' || selection3 == 'b')
            {
                printf("\n--Multiplication Is Set To Decimal--");
                printf("\n\nInput Number 1: ");
                    scanf("%f", &num3);
                printf("Input Number 2: ");
                    scanf("%f", &num4);

                result2 = num3 * num4;

                printf("Product: %f", result2);

                return 1;
            }
        } 
    }
    
    //Division
    if (selection == 'D' || selection == 'd')
    {
        printf("\n\n--The Operation Is Set to Division--");
        printf("\n--Select Type Of Division--");
        printf("\n\nA. Whole Number");
        printf("\nB. Decimal");
        printf("\n\nInput Selection: ");
            scanf("%s", &selection5);
        
        while (selection5 == 'A' || selection5 == 'B' || selection5 == 'a' || selection5 == 'b')
        {
            if (selection5 == 'A' || selection5 == 'a')
            {
                printf("\n--Division Is Set To Whole Number--");
                printf("\n\nInput Number 1: ");
                    scanf("%d", &dividend1);
                printf("Input Number 2: ");
                    scanf("%d", &divisor1);

                if (dividend1 == 0)
                {
                    printf("Invalid Input");
                    return 1;

                }

                    while (dividend1 >= divisor1)
                    {

                        dividend1 = dividend1 - divisor1;
                        pq++;

                    }
                        printf("\nQoutient: %d", pq);
                        printf("\nRemainder: %d", dividend1);

                        return 1; 
            }

            if (selection5 == 'B' || selection5 == 'b')
            {
                printf("\n--Division Is Set To Decimal--");
                printf("\n\nInput Dividend: ");
                    scanf("%f", &dividend2);
                printf("Input Divisor: ");
                    scanf("%f", &divisor2);

                if (dividend2 == 0)
                {
                    printf("Invalid Input");
                    return 1;
                }

                while (dividend2 >= divisor2)
                {

                    dividend2 = dividend2 - divisor2;
                    pq++;
                }

                    printf("\nQoutient: %d", pq);
                    printf("\nRemainder: %.3f", dividend2);

                    return 1;
            }     
        }
    }

    //End 
    else
    {
        printf("\n\t=====Invalid Input======");
    }

    return 0;
}