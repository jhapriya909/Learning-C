#include <stdio.h>

// Function to calculate power (base^exponent)
int power(int base, int exponent) {
    int result = 1;
    for(int i = 0; i < exponent; i++) {
        result = result * base;
    }
    return result;
}

int main() {
    int base = 2, exponent = 3;
    printf("%d raised to the power %d is %d\n", base, exponent, power(base, exponent));
    return 0;
}
