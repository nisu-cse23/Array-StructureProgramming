#include <stdio.h>

int main() {
   
    float a1, b1, c1, a2, b2, c2;
    float x, y;

   
    printf("Enter the coefficients a1, b1, c1 for the first equation (a1x + b1y = c1):\n");
    scanf("%f %f %f", &a1, &b1, &c1);

    printf("Enter the coefficients a2, b2, c2 for the second equation (a2x + b2y = c2):\n");
    scanf("%f %f %f", &a2, &b2, &c2);

   
    float det = a1 * b2 - a2 * b1;

  
    if (det == 0) {
        printf("The system has no solution or infinite solutions (determinant is 0).\n");
    } 
    else {
        
        x = (c1 * b2 - c2 * b1) / det;
        y = (a1 * c2 - a2 * c1) / det;

     
        printf("The solution is:\n");
        printf("x = %.2f\n", x);
        printf("y = %.2f\n", y);
        
    }

    return 0;
}