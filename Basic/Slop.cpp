#include <stdio.h>

int main() {
    float x1, y1, x2, y2;
    
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    
    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    
    if (x2 == x1) {
        printf("Slope is undefined (division by zero).\n");
    }
     else {
        
        float slope = (y2 - y1) / (x2 - x1);
        
        printf("The slope between the points (%.2f, %.2f) and (%.2f, %.2f) is: %.2f\n", x1, y1, x2, y2, slope);
    }
    
    return 0;
}