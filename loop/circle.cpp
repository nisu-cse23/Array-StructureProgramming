#include <stdio.h>

int main() {
    int x, y;
    int centerX = 5, centerY = 7, radius = 7;

    printf("Enter the coordinates of the point (X Y): ");
    scanf("%d %d", &x, &y);

    int distanceSquared = (x - centerX) * (x - centerX) + (y - centerY) * (y - centerY);
    
    if (distanceSquared <= radius * radius) {
        printf("The point (%d, %d) is inside the circle.\n", x, y);
    } else {
        printf("The point (%d, %d) is outside the circle.\n", x, y);
    }

    return 0;
}