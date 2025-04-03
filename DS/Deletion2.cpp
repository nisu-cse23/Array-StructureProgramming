#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, N, K, ITEM;
    int LA[100]; 

    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &LA[i]);
    }

    printf("Enter the position (1 to %d) to delete an element: ", N);
    scanf("%d", &K);


    ITEM = LA[K - 1];  

    for (j = K - 1; j < N - 1; j++) {
        LA[j] = LA[j + 1];  
    }

    
    N--;

    printf("ITEM %d deleted from position :%d\n", ITEM, K);
    printf("Array after deletion:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", LA[i]);
    }
    printf("\n");

}