#include <stdio.h>

int main() {
    int n, i, ITEM, LOC=1, index;
    printf("Enter the number of sorted integers (n): ");
    scanf("%d", &n);

    int DATA[n];

    printf("Enter %d sorted integers: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &DATA[i]);
    }

    printf("Enter the item to search: ");
    scanf("%d", &ITEM);

    DATA[n+1] = ITEM;
    
    index = 0;
    
    while (DATA[index] != ITEM) {
        index = index + 1;
    }
    

    if (index == n+1) {
        LOC = 0; 
        printf("\nNot Found");
    } else {
        LOC = index + 1;
        printf("\nFound at position %d", LOC);
    }
    
    return 0;
}