#include <stdio.h>

int main()
{
    int elements[] = {0, 0, 0, 0, 0};
    int size = sizeof(elements) / sizeof(int) - 1;
    int input;
    int choice = 0;

    do
    {
        printf("\n1. Input Values");
        printf("\n2. Reverse of Array");
        printf("\n3. Exit");
        printf("\nInput Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            for (int i = 0; i < size; i++)
            {
                printf("Enter Number: ");
                scanf("%d", &input);
                elements[i] = input; //To store input to array
            }
        }

        if (choice == 2)
        {
            printf("Reverse of Arrays: \n");
            
            for (int j = size - 1; j >= 0; j--)
            {
                printf("%d ", elements[j]);
            }

            printf("\n");    
        }
 
    } while (choice != 3);
    
    return 0 ;
}