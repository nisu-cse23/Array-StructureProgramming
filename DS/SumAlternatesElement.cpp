#include <stdio.h>

int main() {
    int n, m;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    
    int matrix[n][m];
    
    printf("Enter the elements of the %dx%d matrix:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int sumEven = 0, sumOdd = 0;
    int count = 0;  
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (count % 2 == 0) {
                sumEven += matrix[i][j];
            } else {
                
                sumOdd += matrix[i][j];
            }
            count++;
        }
    }
    
    printf("Sum of alternate elements:%d,%d\n", sumEven, sumOdd);
    
    return 0;
}