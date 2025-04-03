#include <stdio.h>

int main() {
    int m, n, p;
    int i, j, k;

    printf("Enter the number of rows and columns for the first matrix (m n): ");
    scanf("%d %d", &m, &n);
    
    int A[m][n];

    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &p);
    
    int B[n][p]; 

    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < p; j++){
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
    int C[m][p];
    for(i = 0; i < m; i++){
        for(j = 0; j < p; j++){
            C[i][j] = 0;
        }
    }
    /*Task:product: C = A * B
     C[i][j] = sum over k of A[i][k] * B[k][j]*/
    
    for(i = 0; i < m; i++){
        for(j = 0; j < p; j++){
            for(k = 0; k < n; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    printf("\nProduct of the matrices is:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < p; j++){
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}