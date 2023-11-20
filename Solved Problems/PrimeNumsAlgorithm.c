#include <stdio.h>

int main()
{
    int limit = 500;
    
    for (int number = 2; number <= limit; number++)
    {
        int flag = 1;
        
        if (number <= 1)
        {
            flag = 0;
            break;
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
            printf("%d ", number);
        }
    }
    
    
    return 0;
}