/**
 * C program to delete all duplicate elements from array
 */

 #include <stdio.h>

 #define MAX_SIZE 100 
 
 int main()
 {
     int arr[MAX_SIZE],size,i,j,k;
    
     printf("Enter size of the array : ");
     scanf("%d", &size);
 
     printf("Enter elements in array : ");
     for(i=0; i<size; i++)
     {
         scanf("%d", &arr[i]);
     }
      //Task: Find duplicate elements in array
     for(i=0; i<size; i++)
     {
         for(j=i+1; j<size; j++)
         {
             if(arr[i] == arr[j])
             {
                 /*Task: Delete the current duplicate element */
                 for(k=j; k < size - 1; k++)
                 {
                     arr[k] = arr[k + 1];
                 }
                 size--;
                 j--;
             }
         }
     }
     printf("\nArray elements after deleting duplicates : ");
     for(i=0; i<size; i++)
     {
         printf("%d\t", arr[i]);
     }
 
     return 0;
 }