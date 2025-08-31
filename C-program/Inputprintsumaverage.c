#include <stdio.h>
#define MAX 100

int main() {
    int n, arr[MAX], i, sum = 0;
    printf("Enter number of elements (max %d): ", MAX);
    scanf("%d", &n);
    if (n <= 0 || n > MAX) {
        printf("Invalid size\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("\nArray elements: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);

    printf("\nSum = %d\nAverage = %.2f\n", sum, (double)sum / n);
    return 0;
}
