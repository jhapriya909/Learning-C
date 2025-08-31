#include <stdio.h>
#define MAX 100

int main() {
    int n, arr[MAX], i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0 || n > MAX) return 0;

    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    // reverse
    for (i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
