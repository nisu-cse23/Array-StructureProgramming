#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    
    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    
    printf("Enter the coordinates of the third point (x3, y3): ");
    scanf("%d %d", &x3, &y3);
    
    float area = 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    
    if (area == 0) {
        printf("The points are collinear.\n");
    }
     else {
        printf("The points are not collinear.\n");
    }
    
    return 0;
}