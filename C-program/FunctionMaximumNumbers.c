#include <stdio.h>

// Function that returns the greater of two numbers
int max(int x, int y) {
    if (x > y)
        return x;
    else
        return y;
}

int main() {
    int a = 10, b = 20;
    printf("Maximum number is %d\n", max(a, b));
    return 0;
}
