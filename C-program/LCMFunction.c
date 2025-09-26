#include <stdio.h>

// Function to find GCD (Greatest Common Divisor)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// Function to find LCM using GCD
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1 = 12, num2 = 18;
    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));
    return 0;
}
