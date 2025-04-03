#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, compound_interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    amount = principal * pow(1 + rate / 100, time);
    compound_interest = amount - principal;

    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}