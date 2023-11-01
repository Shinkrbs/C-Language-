#include <stdio.h>

void pattern(int rows)
{
    int spaceInside;

    //For New Line
    for (int patternRows = 1; patternRows <= rows; patternRows++)
    {
        for (int newLine = 1; newLine <= rows; newLine++)
        {
            //For Square
            for (int newLine_square = 1; newLine_square <= rows; newLine_square++)
            {
                for (spaceInside = 1; spaceInside <= 1; spaceInside++)
                {
                    printf(" ");
                }
                printf("*");
            }

            //For Space in the middle of the iteration
            for (int middleSpace = 1; middleSpace <= 1; middleSpace++)
            {
                printf(" ");
            }

            //For Hash
            for (int hash = 1; hash <= rows; hash++)
            {
                for (spaceInside = 1; spaceInside <= 1; spaceInside++)
                {
                    printf(" ");
                }  
                printf("#"); 
            }

            //For rightmost space to provide space before iteration of the square pattern
            for (int rightSpace = 1; rightSpace <= 1; rightSpace++)
            {
                printf(" ");
            }
        } 
        printf("\n");
    }
}

int main()
{
    int rows;
     
    printf("Input Rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        pattern(rows);
        printf("\n");
    }
    
    return 0;
}