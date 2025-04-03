#include <stdio.h>
#include <math.h>

int main() {
    float radius, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    circumference = 2 * M_PI * radius;
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}