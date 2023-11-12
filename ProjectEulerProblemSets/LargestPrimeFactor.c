#include <stdio.h>

//find factors of the number
//identify whether it is prime or composite
//find the largest prime factor

int primeFactor(long long int num);

int main()
{
    long long int num = 600851475143;

    primeFactor(num);

    return 0;
}

int primeFactor(long long int num)
{
   // finding factors using a loop
    for (long long int i = 2; i <= num; i++) //this will iterate as for a prime number
    {
        if (num % i == 0) //check if current num is a factor of num
        {
            //check if prime factor
            while (num % i == 0)
            {
                num /= i; //this will divide the num until the num will not be an even num
            }

            // if number is still greater than 0, it means it is prime
            if (num > 0)
            {
                printf("%lld ", i);
            }
        }
    }
    return 0;
}