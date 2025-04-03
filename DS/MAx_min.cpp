#include <stdio.h>

int main() {
    int i, N, max, min;
    
    printf("Enter number of elements: ");
    scanf("%d", &N);
    
    int arr[N];
    
    printf("Enter %d elements of the array\n", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];
    
    for(i = 1; i < N; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
}