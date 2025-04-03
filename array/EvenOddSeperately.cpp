#include <stdio.h>

#define MAX_SIZE 1000

void arrange(int arr[], int len);
void sort(int arr[], int start, int end);
void print(int arr[], int len);

int main() {
    int arr[MAX_SIZE], i, n;
    int evenCount = 0;

    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    print(arr, n);

    arrange(arr, n);

    printf("\nElements after arranging even and odd elements separately\n");
    print(arr, n);

    // Count evens to identify the partition index
    for(i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
    }

    // Sort even and odd parts separately
    sort(arr, 0, evenCount);       // sort evens
    sort(arr, evenCount, n);       // sort odds

    printf("\nFinal array after sorting even and odd elements separately\n");
    print(arr, n);

    return 0;
}

void arrange(int arr[], int len) {
    int i = 0, j = len - 1, temp;

    while(i < j) {
        // If left is even, move forward
        if (arr[i] % 2 == 0) {
            i++;
        }
        // If right is odd, move backward
        else if (arr[j] % 2 == 1) {
            j--;
        }
        // Swap if left is odd and right is even
        else {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
}

void sort(int arr[], int start, int end) {
    int i, j, temp;
    for(i = start; i < end - 1; i++) {
        for(j = i + 1; j < end; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print(int arr[], int len) {
    int i;
    printf("Elements in the array: ");
    for(i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}