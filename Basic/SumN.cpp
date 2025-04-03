#include <stdio.h>

int main() {
    int n, a, d;
    float sum;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Enter the first term (a): ");
    scanf("%d", &a);

    printf("Enter the common difference (d): ");
    scanf("%d", &d);

    sum = (n / 2.0) * (2 * a + (n - 1) * d);

    printf("The sum of the arithmetic series is: %.2f\n", sum);

    return 0;
}