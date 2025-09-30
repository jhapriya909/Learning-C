#include <stdio.h>

// Function to calculate sum of even numbers
int sumEvenNumbers(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            sum += arr[i];
    }
    return sum;
}

int main() {
    int numbers[] = {5, 8, 12, 3, 10};
    int size = 5;
    printf("Sum of even numbers = %d\n", sumEvenNumbers(numbers, size));
    return 0;
}
