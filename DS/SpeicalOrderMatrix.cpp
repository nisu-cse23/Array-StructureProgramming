#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100];  
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int top = 0;           
    int bottom = rows - 1; 
    int left = 0;          
    int right = cols - 1;  

    printf("Spiral Order: ");
    while (left <= right && top <= bottom) {
        for (int j = left; j <= right; j++) {
            printf("%d ", matrix[top][j]);
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                printf("%d ", matrix[bottom][j]);
            }
            bottom--;
        }        
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }

    printf("\n");
    return 0;
}