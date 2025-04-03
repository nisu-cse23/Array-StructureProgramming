#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j;
    bool isIdentity = true;  

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

    //Task: if the matrix is an identity matrix
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            //Task:For an identity matrix diagonal elements must be 1 and others 0
            if (i == j) {
                if(matrix[i][j] != 1){
                    isIdentity = false;
                    break;
                }
            } else {
                if(matrix[i][j] != 0){
                    isIdentity = false;
                    break;
                }
            }
        }
        if(!isIdentity) {
            break;
        }
    }

    if(isIdentity)
        printf("\nThe matrix is an identity matrix.\n");
    else
        printf("\nThe matrix is not an identity matrix.\n");

    return 0;
}