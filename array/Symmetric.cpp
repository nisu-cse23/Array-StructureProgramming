/**
 * C program to check whether a matrix is symmetric matrix or not
 */

 #include <stdio.h>
 #define SIZE 3
 
 int main()
 {
     int A[SIZE][SIZE];  
     int B[SIZE][SIZE]; 
 
     int row, col, isSymmetric;
 
     printf("Enter elements in matrix of size 3x3: \n");
     for(row=0; row<SIZE; row++)
     {
         for(col=0; col<SIZE; col++)
         {
             scanf("%d", &A[row][col]);
         }
     }
 
     for(row=0; row<SIZE; row++)
     {
         for(col=0; col<SIZE; col++)
         {
           
             B[row][col] = A[col][row];
         }
     }
 
 
   
     isSymmetric = 1;
     for(row=0; row<SIZE && isSymmetric; row++)
     {
         for(col=0; col<SIZE; col++)
         {
             if(A[row][col] != B[row][col])
             {
                 isSymmetric = 0;
                 break;
             }
         }
     }
 
     
     if(isSymmetric == 1)
     {
         printf("\nThe given matrix is Symmetric matrix: \n");
 
         for(row=0; row<SIZE; row++)
         {
             for(col=0; col<SIZE; col++)
             {
                 printf("%d ", A[row][col]);
             }
 
             printf("\n");
         }
     }
     else
     {
         printf("\nThe given matrix is not Symmetric matrix.");
     }
 
     return 0;
 }