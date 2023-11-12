#include <stdio.h>

//Make a function that will iterate from 1 to 20 as limit
//In the function identify if a number is divisible from all numbers starting from 1 to 20

int isDivisible(int limit);

int main()
{
    int limit = 20;
    int divisibleNumb = isDivisible(limit);

    printf("%d ", divisibleNumb);

    return 0;
}

int isDivisible(int limit)
{
    int flag = 1;
    int number = 1;

    while (1)//Means code will continue until return
    {
        flag = 1;
        
        for (int i = 1; i <= limit; i++)
        {
            if (number % i != 0)
            {
                flag = 0;
                break;
            } 
        }

        if (flag) //Means the number was found since the if statement inside will be false
        {
            return number;
        }

        number++;
    }

    return 0;
}