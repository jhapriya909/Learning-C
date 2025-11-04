#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n], B[m][n], sum[m][n];

    printf("Enter elements of matrix A:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    // addition
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            sum[i][j] = A[i][j] + B[i][j];

    printf("Sum of matrices:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
