#include <stdio.h>

int max_power(int prime, int limit) {
    int power = 1;
    while (prime * power <= limit) {
        power *= prime;
    }
    return power;
}

int main() {
    int limit = 20;
    long long lcm = 1;

    for (int i = 1; i <= limit; i++) {
        lcm *= max_power(prime, limit);
    }

    printf("The smallest number divisible by all numbers from 1 to 20 is: %lld\n", lcm);

    return 0;
}
