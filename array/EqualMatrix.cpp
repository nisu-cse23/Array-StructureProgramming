/**
 * C program to check whether two matrices are equal or not
 */

 #include <stdio.h>

 #define SIZE 3 
 
 int main()
 {
     int A[SIZE][SIZE]; 
     int B[SIZE][SIZE];
 
     int row, col, isEqual;
 
     printf("Enter elements in matrix A of size %dx%d: \n", SIZE, SIZE);
     for(row=0; row<SIZE; row++)
     {
         for(col=0; col<SIZE; col++)
         {
             scanf("%d", &A[row][col]);
         }
     }
 
     printf("\nEnter elements in matrix B of size %dx%d: \n");
     for(row=0; row<SIZE; row++)
     {
         for(col=0; col<SIZE; col++)
         {
             scanf("%d", &B[row][col]);
         }
     }
 
     isEqual = 1;
 
     for(row=0; row<SIZE; row++)
     {
         for(col=0; col<SIZE; col++)
         {
             if(A[row][col] != B[row][col])
             {
                 isEqual = 0;
                 break;
             }
         }
     }
 
     if(isEqual == 1)
     {
         printf("\nMatrix A is equal to Matrix B");
     }
     else
     {
         printf("\nMatrix A is not equal to Matrix B");
     }
 
     return 0;
 }