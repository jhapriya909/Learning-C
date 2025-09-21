#include <stdio.h>

// Function to calculate Simple Interest
float simpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float p = 1000, r = 5, t = 2;
    printf("Simple Interest = %.2f\n", simpleInterest(p, r, t));
    return 0;
}
