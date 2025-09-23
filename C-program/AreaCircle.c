#include <stdio.h>
#define PI 3.1416

// Function to calculate area of circle
float areaOfCircle(float radius) {
    return PI * radius * radius;
}

int main() {
    float r = 7;
    printf("Area of circle with radius %.2f is %.2f\n", r, areaOfCircle(r));
    return 0;
}
