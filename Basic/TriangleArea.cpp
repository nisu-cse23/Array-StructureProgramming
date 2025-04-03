#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    
    printf("Enter the coordinates of the first vertex (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    
    printf("Enter the coordinates of the second vertex (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    
    printf("Enter the coordinates of the third vertex (x3, y3): ");
    scanf("%d %d", &x3, &y3);
    
    float area = fabs(0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));
    
    printf("The area of the triangle is: %.2f\n", area);
    
    return 0;
}