#include <stdio.h>
#include <stdbool.h>

int sumofDigits(int num);
bool isaPrime(int sum);

int main()
{
    int num, sum;

    printf("Input Number: ");
    scanf("%d", &num);

    sum = sumofDigits(num);

    printf("Sum: %d\n", sum);

    isaPrime(sum);

    return 0;
}

int sumofDigits(int num)
{
    int sum = 0;
    int digit = 0;

    while (num != 0)
    {
        digit = 0;
        digit = num % 10;
        sum += digit;
        num /= 10;   
    }
    
    return sum;
}

bool isaPrime (int sum)
{
    int temp = 2;

    while (temp <= sum)
    {
        if (sum % 2 == 0)
        {
            break;
        }

        else
        {
            temp++;
        }
    }
    
    return (sum > temp) ? printf("Composite") : printf("Prime");
}