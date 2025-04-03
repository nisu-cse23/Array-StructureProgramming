#include <stdio.h>

int main() {
    int disp[2][3]; 
    int i, j;

    printf("Enter 6 elements (for a 2 x 3 array):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("disp[%d][%d] = ", i, j);
            scanf("%d", &disp[i][j]);
        }
    }

    printf("\nTwo-Dimensional array elements:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", disp[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}