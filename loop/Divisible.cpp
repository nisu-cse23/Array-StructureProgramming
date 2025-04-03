#include <stdio.h>

int main() {
    int sum = 0;
    
    for (int i = 100; i <= 200; i++) {
        if (i % 17 == 0) {
            sum += i;
        }
    }
    
    printf("Sum of numbers between 100 and 200 divisible by 17 is: %d\n", sum);
    return 0;
}