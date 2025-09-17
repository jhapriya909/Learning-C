#include <stdio.h>

// Function to find the largest element in an array
int findLargest(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int numbers[] = {15, 22, 8, 19, 31};
    int size = 5;
    printf("The largest number is %d\n", findLargest(numbers, size));
    return 0;
}
