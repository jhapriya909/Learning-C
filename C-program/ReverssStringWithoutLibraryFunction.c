#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;

    printf("Enter a string: ");
    gets(str); // use fgets(str, sizeof(str), stdin) for safer input

    // find length manually
    while (str[length] != '\0') {
        length++;
    }

    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
