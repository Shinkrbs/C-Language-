#include <stdio.h>

//Make a function that will print prime numbers
//Make a function that will count

int primeNumber(int numb);

int main()
{
    int number = 2;
    int count = 0;
    
    while (count < 10001)
    {
        if (primeNumber(number))
        {
            printf("%d ", number);
            count++;
        }

        number++;
    }

    return 0;
}

int primeNumber(int number)
{
    int flag = 1;

    if (number <= 1)
    {
        flag = 0;
    }

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        return 1;
    }

    return 0;
}