#include <stdio.h>

int main() {

    int i, sum;
    sum = 0;

    for(i = 1; i <= 10; i += 2) {  

        sum += i; 

    }

    printf("sum is: %d", sum);  
    
    return 0;
}