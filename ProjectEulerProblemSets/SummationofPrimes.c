#include <stdio.h>

//Print Primes
//Add the sum of below two million
int prime(long long int number);

int main()
{
    long long int limit = 2000000;
    long long int number = 2;
    long long int sum = 0;

    while (number < limit)
    {
        if (prime(number))
        {
            //printf("%lld ", number);
            sum += number;
        }
        number++;
    }
    

    printf("\nSum of All Primes Below Two Million: %lld", sum);

    return 0;
}

int prime(long long int number)
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