#include <stdio.h>

// function definition
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before Swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);   // function call (pass by reference)
    printf("After Swap: x = %d, y = %d\n", x, y);

    return 0;
}
