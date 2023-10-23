#include <stdio.h>

int main()
{
    int n;
    int f = 2;

    printf("Enter Number: ");
    scanf("%d", &n);
    
    while (f <= n)
    {
        if (n % f == 0)
        {
            break;
        } 
        else
        {
            f++;
        }
        
    }

    if (f < n)
    {
        printf("Composite");
    }
    else
    {
        printf("Prime");
    }

    return 0;
}