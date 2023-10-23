#include <stdio.h>

//Nested Loops Practice

//Incrementing and Decrementing in Nested loop is very libog HAHA!
//Decrementing and incrementing per iteration means the all the values of the said syntax will be displayed
//for example it is the third iteration of x = 1; x++ == x--.
//therefore the output will become x++ = 1, 12, 123 and for the decrement will be 321,21,1

int firstPattern()
{
    int rows = 5;
    int number;
    int nextNumber;

    do
    {
       for (number = 1; number <= rows; number++) //Outer Loop; it prints columns(horizontal) therefore the columns will be consisted of 1-5.
       {
        for (nextNumber = 1; nextNumber <= number; nextNumber++) //Inner Loop is the number of rows (vertical) per column
        {
            printf("%d", number); //In this pattern we need to print 1,22,333,4444,5555 therefore the number of var number will be printed.
        }                         // The number in the inner loop is one and will be incremented per iteration therefore the number of numbers per row will increase until the limit is reached.
         printf("\n");
       }
    } while ( number <= rows);

    return number;
}

int secondPattern()
{

    int rows = 5;
    int number;
    int nextNumber;

    do
    {
        for (number = 1; number <= rows; number++) //Here we need to print 1,12,123,1234,12345
        {                                         // The code will be the same for the first pattern but nextNumber will be printed since it is positioned in the row and the value increases per iteration.
            for(nextNumber = 1; nextNumber <= number; nextNumber++) //Here we can see that the nextnumber will be incremented per iteration therefore the value will increase from 1 to 12 and so on.
            {
                printf("%d", nextNumber);
            }
            printf("\n");
        }
    } while (number <= rows);

    return nextNumber;
}

int thirdPattern()
{

    int rows = 5;
    int number;
    int nextNumber;

    do
    {
        for ( number = 1; number <= rows; number++) //Here we need to print the number in a more complex way; 1,21,321,4321,54321..
        {                                           //The trick here is the value of number to nextNumber will be the same but the value of the nextNumber needs to be decremented
            for (nextNumber = number; nextNumber >= 1; nextNumber--)//For example here the value of nextNumber in the second itteration is 2 and since it decrements the value will become 21 instead of 12
            {
                printf("%d", nextNumber);
            }
            printf("\n");
        }

    } while (number <= rows);

}

int fourthPattern()
{
    int rows = 5;
    int number;
    int nextNumber;
    int space;

    do
    {
        for (number = 1; number <= rows; number++)//Number of rows
        {
            for (space = 6; space >= number; space -= 2)//for Space
            {
                    printf(" ");
            }
            for (nextNumber = 1; nextNumber <= number; nextNumber++)
            {
                printf("%d", nextNumber);
            }

            printf("\n");
        }

    } while (number <= rows);

}



int main()
{

    firstPattern();
    secondPattern();
    thirdPattern();
    fourthPattern();

    return 0;
}
