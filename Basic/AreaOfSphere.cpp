#include <stdio.h>
#include <math.h>

int main() {
    float radius, surface_area;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    surface_area = 4 * M_PI * pow(radius, 2);
    printf("Surface area of the sphere: %.2f\n", surface_area);

    return 0;
}