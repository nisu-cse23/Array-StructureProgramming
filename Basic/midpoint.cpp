#include <stdio.h>

int main() {
    float x1, y1, x2, y2;
    
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    
    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    
    float midpoint_x = (x1 + x2) / 2;
    float midpoint_y = (y1 + y2) / 2;
    
    printf("The midpoint of the line segment between (%.2f, %.2f) and (%.2f, %.2f) is:\n (%.2f, %.2f)\n", x1, y1, x2, y2, midpoint_x, midpoint_y);
    
    return 0;
}