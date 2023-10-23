/*Problem: Write a Guessing Game where the user has to guess
a secret number. After every guess the program tells the user 
whether their number was too large or too small. At the end the 
number of tries needed should be printed. It counts only as one
try if they input the same number multiple times consecutively.*/

#include <stdio.h> 
#include <time.h> //Used to generate random numbers
#include <stdlib.h> //Used for random numbers

void guessNum(int n) //Function is used to implement needed action
{
    int num, guess;
    int numberofGuess = 0;
    int numberofGuess_Limit = 10;

    //Seed Random Number Generator
    srand(time(NULL));

    //Generate RNum
    num = rand() % n;

    //User Input
    printf("\nGuess a number between 1 and %d..", n);

    do
    {
        //Number of Guesses is == 9 + 1 = 10(Lives)
        if (numberofGuess > 9)
        {
            printf("\n\nGame Over :(");
            break;
        }

        //Input user
        printf("\nInput Guess: ");
        scanf("%d", &guess);

        //Condition if Input is Zero
        if (num != 0)
        {
            if (guess == 0)
            {
                printf("\nInput a Number Greater than 0!");
            }
        }
        
        //Condition if input is higher than num
        if (guess > num)
        {
            printf("\nLower Number!");
            numberofGuess++; //Increment to indicate loss of numofGuess
            printf("\nNumber of Guess Until Game Over: %d / %d", numberofGuess, numberofGuess_Limit); //To display remaining guesses
        }

        //Condition if input is lower than num
        else if (guess < num)
        {
            printf("\nHigher Number!");
            numberofGuess++; //Increment
            printf("\nNumber of Guess Until Game Over: %d / %d", numberofGuess, numberofGuess_Limit); 
        }

        //Condition if correct guess
        if (guess == num)
        {
            if (numberofGuess == 0)
            {
                numberofGuess++;
                printf("\nCongratulations, You Guessed the Number!");
                break;
            }
            
            numberofGuess++;
            printf("\nCongratulations, You Guessed the Number!");
            break;
        } 

    } while (guess != num);

    //Condition to display num of guesses(attempts)
    printf("\nNumber of Attempts Made: %d", numberofGuess);
}

int main()
{
    int n;
    
    //Condition for limit
   do
   {
        printf("Input Limit of Guess Number: ");
        scanf("%d", &n);

        //If input is 0
        if (n == 0)
        {
            printf("\nInput a Limit that is Greater than 0!");
            printf("\nInput Limit of Guess Number: ");
            scanf("%d", &n);
        }

        else
        {
            break;
        }
           
   } while (n == 0);
   
    //Call function guessNum
    guessNum(n);

    return 0;
}