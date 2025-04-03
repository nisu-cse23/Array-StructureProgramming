#include <stdio.h>

int main() {
    int sr[6] = {4, 5, 15, 23, 421, 1}; 
    int search, found = 0;

    printf("Enter element to search: ");
    scanf("%d", &search);

    for (int i = 0; i < 6; i++) {
        if (sr[i] == search) {
            printf("Element found at index %d\n", i); 
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Not Found\n");
    }

    return 0;
}