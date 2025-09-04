#include <stdio.h>

// function definition
float simpleInterest(float p, float r, float t) {
    return (p * r * t) / 100;
}

int main() {
    float principal, rate, time;
    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    printf("Simple Interest = %.2f\n", simpleInterest(principal, rate, time));
    return 0;
}
