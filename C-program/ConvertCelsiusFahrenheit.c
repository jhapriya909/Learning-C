#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float c = 25;
    printf("%.2f Celsius is %.2f Fahrenheit\n", c, celsiusToFahrenheit(c));
    return 0;
}
