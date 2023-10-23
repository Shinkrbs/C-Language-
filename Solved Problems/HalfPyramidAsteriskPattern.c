#include <stdio.h>

int main()
{

    int rows;
    int columns;
    int space;
    int i;

    printf("Input Rows: ");
    scanf("%d", &rows);

    for ( i = 1; i <= rows; i++)
    {
        for (columns = i; columns >= 1; columns--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}