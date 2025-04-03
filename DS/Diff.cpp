#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    float mean = (float)sum / size;
    
    printf("Mean: %.2f\n", mean);
    
    float difference[size];
    
    for (int i = 0; i < size; i++) {
        difference[i] = arr[i] - mean;
    }
    
    printf("Differences from mean: ");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", difference[i]);
    }
    printf("\n");
    
    return 0;
}