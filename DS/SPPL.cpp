#include <stdio.h>

int main() {
    int n, i, target;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

  
    int arr[n];
     printf("Enter %d sorted integers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the target value: ");
    scanf("%d", &target);
    int index = 0;
    
    while(index < n && arr[index] < target) {
        index++;
    }

    if(index < n && arr[index] == target) {
        printf("Output: %d\n", index);
    } 
    else {
        printf("Output: %d\n", index);
    }

    return 0;
}