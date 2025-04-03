#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    
    printf("Enter the coordinates of the first vertex (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    
    printf("Enter the coordinates of the second vertex (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    
    printf("Enter the coordinates of the third vertex (x3, y3): ");
    scanf("%d %d", &x3, &y3);
    
    float centroid_x = (x1 + x2 + x3) / 3.0;
    float centroid_y = (y1 + y2 + y3) / 3.0;
    
    printf("The centroid of the triangle is: (%.2f, %.2f)\n", centroid_x, centroid_y);
    
    return 0;
}