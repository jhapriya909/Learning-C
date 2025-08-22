#include <stdio.h>

int main() {
    int a, b;
    char cont;
    do {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Sum = %d\n", a + b);
        printf("Do you want to add again? (y/n): ");
        scanf(" %c", &cont);
    } while (cont == 'y' || cont == 'Y');
    return 0;
}
