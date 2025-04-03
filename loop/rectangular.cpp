#include <stdio.h>

int main() {
    int x, y;
    
    printf("Enter the coordinates of the point (X Y): ");
    scanf("%d %d", &x, &y);
    
    if (x >= 2 && x <= 5 && y >= 1 && y <= 6) {
        printf("The point (%d, %d) is inside the rectangle.\n", x, y);
    } 
    else {
        printf("The point (%d, %d) is outside the rectangle.\n", x, y);
    }
    
    return 0;
}