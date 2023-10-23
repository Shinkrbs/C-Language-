#include <stdio.h>

int oddNumber(int n)
{
    int count = 1;
    int oddNumbers = 1;
    int sum = 0;

    printf("The Odd Numbers Are: 1 ");

    do
    {
        oddNumbers += 2;
        printf("%d ", oddNumbers);
        sum += oddNumbers;
        count++;

    } while (count < n);
    
    sum += 1;

    printf("\nThe Sum of the Display Value is: %d", sum);
    
    return n;
}

int evenNumber(int n)
{
    int count = 1;
    int evenNumbers = 2;
    int sum = 0;

    printf("The Even Numbers Are: 2 ");

   do
   {
        evenNumbers += 2;
        printf("%d ", evenNumbers);
        sum += evenNumbers;
        count++;

   } while (count < n);
   
   sum += 2;

   printf("\nThe Sum of the Display Value is: %d", sum);
    
    return n;
}

int main()
{
    char choice;
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    while ((getchar()) != '\n'); // Consume the newline character left in the buffer

    printf("\nChoose Number to Display;");
    printf("\nPress O/o: Odd Number");
    printf("\nPress E/e: Even Number");
    printf("\nInput Choice: ");
    scanf("%c", &choice); //\n is being consumed from previous scanf

    if (choice == 'O' || choice == 'o')
    {
        printf("\nYou Chose Odd Number:\n");
        oddNumber(n);
    }

    else if (choice == 'E' || choice == 'e')
    {
        printf("\nYou Chose Even Number:\n");
        evenNumber(n);
    }
    
    return 0;
}