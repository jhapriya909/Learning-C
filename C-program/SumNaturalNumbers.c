#include <stdio.h>

// Function to calculate sum of first n natural numbers
int sumNaturalNumbers(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int n = 10;
    printf("Sum of first %d natural numbers is %d\n", n, sumNaturalNumbers(n));
    return 0;
}
