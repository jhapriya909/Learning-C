#include <stdio.h>

void checkEvenOdd(int n); // Function declaration

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkEvenOdd(num); // Function call
    return 0;
}

void checkEvenOdd(int n) { // Function definition
    if(n % 2 == 0)
        printf("%d is even\n", n);
    else
        printf("%d is odd\n", n);
}
