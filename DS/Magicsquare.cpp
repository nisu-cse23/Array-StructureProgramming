#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    //Task1:Calculate the sum of the first row as the reference sum
    int referenceSum = 0;
    for(int j = 0; j < n; j++) {
        referenceSum += matrix[0][j];
    }

    //Task2:Check each row's sum
    for(int i = 1; i < n; i++) {
        int rowSum = 0;
        for(int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }
        if(rowSum != referenceSum) {
            printf("Not a magic square.\n");
            return 0;
        }
    }

    //Task3:Check each column's sum
    for(int j = 0; j < n; j++) {
        int colSum = 0;
        for(int i = 0; i < n; i++) {
            colSum += matrix[i][j];
        }
        if(colSum != referenceSum) {
            printf("Not a magic square.\n");
            return 0;
        }
    }

    //Task4:Check the sum of the main diagonal
    int diagSum1 = 0;
    for(int i = 0; i < n; i++) {
        diagSum1 += matrix[i][i];
    }
    if(diagSum1 != referenceSum) {
        printf("Not a magic square.\n");
        return 0;
    }

    //Task5:Check the sum of the secondary diagonal
    int diagSum2 = 0;
    for(int i = 0; i < n; i++) {
        diagSum2 += matrix[i][n - 1 - i];
    }
    if(diagSum2 != referenceSum) {
        printf("Not a magic square.\n");
      
    }
     else{
    printf("It is a magic square!\n");
     }
    return 0;
}