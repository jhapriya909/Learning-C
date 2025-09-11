

#include <stdio.h>

// Function declaration (optional but good practice)
int add(int a, int b);

int main() {
    int sum;
    sum = add(5, 3); // Function call
    printf("Sum: %d\n", sum);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
