#include <stdio.h>
#include <stdlib.h>

int main() {
    int N,K,ITEM,i,j, LA[100];     
           

    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    printf("Enter %d elements:\n", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &LA[i]);
    }

    printf("Enter the position (1 to %d) to insert a new element: ", N);
    scanf("%d", &K);

    printf("Enter the element to insert: ");
    scanf("%d", &ITEM);

    

    for(j = N - 1; j >= K - 1; j--) {
        LA[j + 1] = LA[j];
    }

    LA[K - 1] = ITEM;

    N++;

    printf("Array after insertion:\n");
    for(i = 0; i < N; i++) {
        printf("%d ", LA[i]);
    }
    printf("\n");

    return 0;
}