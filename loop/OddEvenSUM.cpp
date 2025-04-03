#include <stdio.h>

int main() {
    int n, sumOdd = 0, sumEven = 0;

    printf("Enter a number n: ");
    scanf("%d", &n);

    printf("Sum of odd numbers: ");
    for (int i = 1; i <= n; i += 2) {
        sumOdd += i;
    }
    printf("%d\n", sumOdd);

    printf("Sum of even numbers: ");
    for (int i = 2; i <= n; i += 2) {
        sumEven += i;
    }
    printf("%d\n", sumEven);

    return 0;
}