#include <stdio.h>
#include <math.h>

int main() {
    int n;   
    float a;  
    printf("Enter the number of sides (n): ");
    scanf("%d", &n);
    
    printf("Enter the length of each side (a): ");
    scanf("%f", &a);
    
    float perimeter = n * a;
    
    float area = (n * a * a) / (4 * tan(M_PI / n));
    
    printf("The perimeter of the polygon is: %.2f\n", perimeter);
    printf("The area of the polygon is: %.2f\n", area);
    
    return 0;
}