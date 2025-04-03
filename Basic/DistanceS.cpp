#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C, x, y;
    
    printf("Enter the coefficients of the line (A, B, C): ");
    scanf("%f %f %f", &A, &B, &C);
    
    printf("Enter the coordinates of the point (x, y): ");
    scanf("%f %f", &x, &y);
    
    float numerator = fabs(A * x + B * y + C);  
    float denominator = sqrt(A * A + B * B);      
    float distance = numerator / denominator;
    
    printf("The distance from the point (%.2f, %.2f) to the line %.2fx + %.2fy + %.2f = 0 is:\n %.2f\n", x, y, A, B, C, distance);
    
    return 0;
}