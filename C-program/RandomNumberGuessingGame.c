#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess;

    srand(time(NULL));  // Random seed
    target = rand() % 100 + 1;  // Generates 1–100

    do {
        printf("Guess the number (1-100): ");
        scanf("%d", &guess);

        if (guess > target)
            printf("Too high!\n");
        else if (guess < target)
            printf("Too low!\n");
    } while (guess != target);

    printf("Congratulations! You guessed it right.\n");
    return 0;
}
