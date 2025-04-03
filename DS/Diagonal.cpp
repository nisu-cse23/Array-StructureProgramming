#include <stdio.h>

int main() {
    int n, i, j;
    int sum = 0;
    
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
    
    printf("\nPrimary diagonal elements: ");
    for(i = 0; i < n; i++){
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }
    
    printf("\nSum of primary diagonal = %d\n", sum);
    
    return 0;
}