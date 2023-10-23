#include <stdio.h>

int main()
{
    int rows;

    printf("Enter Number of Rows: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) //the rows was put in the value of var i since the value will decrement so rows will decrement
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}