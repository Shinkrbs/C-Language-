#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randVal();
int revVal(int *a);

int main()
{
    int a = randVal();

    printf("Original Value: %d\n", a);
    a = revVal(&a);
    printf("Reversed Value: %d\n", a);
}

int randVal()
{
    time_t t;
    srand((unsigned)time(&t));
    int val = rand() % 12345;
    return val;
}

int revVal(int *a)
{
    int rev = 0;
    while (*a != 0)
    {
        int digit = *a % 10;
        rev = rev * 10 + digit;
        *a /= 10;
    }
    return rev;
}