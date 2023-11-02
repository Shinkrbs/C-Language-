#include <stdio.h>
// Displays how many steps of the Collatz Sequence of the numbers 1-99
int main()
{
    for (int i = 1; i < 100; i++)
    {
        int x = i;
        int steps = 0;

        while (x != 1)
            {
                if (x % 2 == 0)
                {
                    x /= 2;
                }

                else
                {
                    x = x * 3 + 1;
                }

            steps++;
            }
    printf("%d = %d\n", i, steps);
}
    return 0;
}