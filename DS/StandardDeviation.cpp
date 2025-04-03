#include <stdio.h>
#include <math.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
   
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    

    float mean = (float)sum / size;
    
   
    
    float sumOfSquares = 0;
    for (int i = 0; i < size; i++) {
        sumOfSquares += (arr[i] - mean) * (arr[i] - mean); 
    }
    
    float variance = sumOfSquares / size;  
    
    float standardDeviation = sqrt(variance);
    printf("Standard Deviation: %.2f\n", standardDeviation);  
    
    return 0;
}