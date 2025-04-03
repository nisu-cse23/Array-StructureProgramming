#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nRow sums:\n");
    for(i = 0; i < n; i++){
        int rowSum = 0;
        for(j = 0; j < n; j++){
            rowSum += matrix[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }
    
    printf("\nColumn sums:\n");
    for(j = 0; j < n; j++){
        int colSum = 0;
        for(i = 0; i < n; i++){
            colSum += matrix[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, colSum);
    }
    
    int diagSum = 0;
    for(i = 0; i < n; i++){
        diagSum += matrix[i][i];
    }
    printf("\nSum of the main diagonal = %d\n", diagSum);
    
    return 0;
}