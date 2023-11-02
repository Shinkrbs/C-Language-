#include <stdio.h>

//A prime number means that numbers factor is only itself and one
int main()
{

    int num;
    int i = 2;

    printf("Input Number: ");
    scanf("%d", &num);

    while (i <= num / 2 && num % i != 0) //O means that a num will always go as not prime
    {
        printf("i = %d, num = %d\n", i, num);//To display values of i for each iteration kay naglisud ko
        i++;
    }
    printf("i = %d, num = %d\n", i, num);//To display final value of i to check in the if statement

    if (i > num / 2)
    {
        printf("num = %d\n", num);
        printf("Prime");
    }
    else
    {
        printf("num = %d\n", num);
        printf("Not Prime!");
    }
    
    return 0;
}