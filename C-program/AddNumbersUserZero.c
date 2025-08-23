#include <stdio.h>
int main() {
    double number, sum = 0;
    do {
        printf("Enter a number (0 to stop): ");
        scanf("%lf", &number);
        sum += number;
    } while (number != 0.0);
    printf("Total Sum = %.2lf\n", sum);
    return 0;
}
