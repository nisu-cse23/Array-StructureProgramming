#include <stdio.h>

int main() {
    float A1, B1, C1, A2, B2, C2;
    
    printf("Enter the coefficients for Line 1 (A1, B1, C1): ");
    scanf("%f %f %f", &A1, &B1, &C1);
    
    printf("Enter the coefficients for Line 2 (A2, B2, C2): ");
    scanf("%f %f %f", &A2, &B2, &C2);
    
    float denominator = A1 * B2 - A2 * B1;
    
    if (denominator == 0)
     {
        printf("The lines are either parallel or coincident (no intersection).\n");

    } 
    else {
        float x = (B1 * C2 - B2 * C1) / denominator;
        float y = (A2 * C1 - A1 * C2) / denominator;
        
        printf("The intersection point is:\n (%.2f, %.2f)\n", x, y);
    }
    
    return 0;
}