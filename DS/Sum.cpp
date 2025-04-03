#include <stdio.h>

int main() {
       int r, c, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int first[r][c], second[r][c], sum[r][c];
    printf("\nEnter the elements of the first matrix:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("first[%d][%d] = ", i, j);
            scanf("%d", &first[i][j]);
        }
    }
    
    printf("\nEnter the elements of the second matrix:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("second[%d][%d] = ", i, j);
            scanf("%d", &second[i][j]);
        }
    }
    
    //Task:Add the two matrices
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            sum[i][j] = first[i][j] + second[i][j];
        }
    }
    
    printf("\nThe sum of the two matrices is:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}