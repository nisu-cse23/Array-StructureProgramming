/**
 * C program to sort elements of array in ascending order
 */

 #include <stdio.h>
 #define MAX_SIZE 100    
 
 int main()
 {
     int arr[MAX_SIZE];
     int size;
     int i, j, temp;
 
     printf("Enter size of array: ");
     scanf("%d", &size);
 
     printf("Enter elements in array: ");
     for(i=0; i<size; i++)
     {
         scanf("%d", &arr[i]);
     }
 
     for(i=0; i<size; i++)
     {
         for(j=i+1; j<size; j++)
         {
             
             if(arr[i] > arr[j])
             {
                 temp  = arr[i];
                 arr[i] = arr[j];
                 arr[j] = temp;
             }
         }
     }
 
     printf("\nElements of array in ascending order: ");
     for(i=0; i<size; i++)
     {
         printf("%d\n", arr[i]);
     }
 
     return 0;
 }