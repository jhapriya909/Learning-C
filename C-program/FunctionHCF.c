#include <stdio.h>

// Function to find HCF
int hcf(int a, int b) {
    while(a != b) {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main() {
    int x = 54, y = 24;
    printf("HCF of %d and %d is %d\n", x, y, hcf(x, y));
    return 0;
}
