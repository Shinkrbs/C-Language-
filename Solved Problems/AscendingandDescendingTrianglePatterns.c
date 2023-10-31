#include <stdio.h>

void ascendingTriangle(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i ; j--)
        {
            printf("%d", j);

            for (int space = 1; space <= rows; space++)
            {
                printf(" ");
            }
            
        }
        
        printf("\n");
    }  
}

void descendingTriangle(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);

            for (int space = 1; space <= rows; space++)
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
    int option;

    printf("Select Type of Half Triangle Pattern:\n");
    printf("1. Descending - Ascending Half Triangle\n");
    printf("2. Ascending - Descending Half Triangle\n");
    printf("Input Selection: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("\nDescending - Ascending Triangle\n");
        printf("Input Rows: ");
        scanf("%d", &rows);
        printf("\nPATTERN\n\n");

        descendingTriangle(rows);
        break;
    case 2:
        printf("\nAscending - Descending Triangle\n");
        printf("Input Rows: ");
        scanf("%d", &rows);
        printf("\nPATTERN\n\n");

        ascendingTriangle(rows);
    default:
        printf("ERROR!");
        break;
    }

    return 0;
}