#include <stdio.h>

int main()
{
    int rows, space, column;
    int asterisk = 0;

    printf("Enter Number of Rows: ");
    scanf("%d", &rows);

    for (column = 1; column <= rows; column++, asterisk = 0)
    {
        for (space = 1; space <= rows - column; space++)
        {
            printf(" ");
        }

        while (asterisk != 2 * column - 1) 
        {
            printf("* ");
            asterisk++;
        } 
        
        printf("\n");  
    }
    

    return 0;
}