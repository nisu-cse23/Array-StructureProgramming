#include <stdio.h>
#include <math.h>

int main() {
    int a1 = 3, a2 = 0, a3 = 2;  
    int b1 = -2, b2 = -2, b3 = 4;  

    
    int dot_product = (a1 * b1) + (a2 * b2) + (a3 * b3);
    double magnitude_a = sqrt(a1 * a1 + a2 * a2 + a3 * a3);
    double magnitude_b = sqrt(b1 * b1 + b2 * b2 + b3 * b3);

    double cos_theta = dot_product / (magnitude_a * magnitude_b);

    printf("Cosine of the angle between the vectors: %.3f\n", cos_theta);

    return 0;
}