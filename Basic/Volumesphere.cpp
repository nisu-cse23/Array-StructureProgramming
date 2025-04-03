#include <stdio.h>
#include <math.h>

int main() {
    float radius, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    volume = (4.0/3.0) * M_PI * pow(radius, 3);
    printf("Volume of the sphere: %.2f\n", volume);

    return 0;
}