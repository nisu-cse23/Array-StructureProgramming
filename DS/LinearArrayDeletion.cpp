#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, N=100, K=51, ITEM, LA[100];
    /* 
     * where,
     * N = number of element
     * K = position or index number
     * LA = array name
     * ITEM = delete element value
     */

    for(i=0; i < 100; i++)
        LA[i] = rand() % 1000;

    ITEM = LA[K];

    for(j=K; j < N-1; j++)
        LA[j] = LA[j+1];

    N = N-1;
    
    printf("ITEM %d deleted from position %d\n", ITEM, K);
}