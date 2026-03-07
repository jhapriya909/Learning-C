#include <stdio.h>

int main() {
    int arr[6] = {1,2,3,4,5};
    int pos = 2, value = 10;

    for(int i = 5; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = value;

    for(int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}