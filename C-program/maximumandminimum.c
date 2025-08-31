#include <stdio.h>
#define MAX 100

int main() {
    int n, arr[MAX], i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0 || n > MAX) return 0;

    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    int mx = arr[0], mn = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > mx) mx = arr[i];
        if (arr[i] < mn) mn = arr[i];
    }

    printf("Max = %d\nMin = %d\n", mx, mn);
    return 0;
}
