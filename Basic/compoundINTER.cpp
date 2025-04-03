#include <stdio.h>
#include <math.h>

int main() {
    
    float P, r, A;
    int n, t;

    printf("Enter the principal amount (P): ");
    scanf("%f", &P);

    printf("Enter the annual interest rate (r) as a decimal(like 0.05 for 5%) : ");
    scanf("%f", &r);

    printf("Enter the number of times interest is compounded per year (n): ");
    scanf("%d", &n);

    printf("Enter the number of years (t): ");
    scanf("%d", &t);

    A = P * pow((1 + r / n), n * t);

    printf("The accumulated amount (A) after %d years is: %.2f\n", t, A);

    return 0;
}