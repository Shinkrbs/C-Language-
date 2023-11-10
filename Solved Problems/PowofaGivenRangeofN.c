#include <stdio.h>
//Power of Values of Range pf a given N

int main() 
{
    int ctr = 1;

    do 
    {
        for (int i = 1; i < 4; i++) 
        {
            int num = ctr;
            
            for (int j = 1; j < i; j++)
            {
                num *= ctr;
            } 

            printf("%d ", num);
        }

        printf("\n");
        ctr++;
    } while (ctr < 6);

    return 0;
}