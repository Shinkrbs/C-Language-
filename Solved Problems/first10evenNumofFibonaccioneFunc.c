#include <stdio.h>

int main()
{
    int firstNum = 1;
    int secNum = 1;
    int nextNum = 0;
    int limit = 10;
    
    while (limit != 0)
    {
        nextNum = firstNum + secNum;
        if (nextNum % 2 == 0)
        {
            printf("%d ", nextNum);
            limit--;
        }
        
        firstNum = secNum;
        secNum = nextNum;
    }
    return 0;
}