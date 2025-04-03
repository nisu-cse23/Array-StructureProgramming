
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
    
    return 0;
}