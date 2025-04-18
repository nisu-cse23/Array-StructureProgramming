/**
 * C program to multiply two matrices
 */

 #include <stdio.h>

 #define SIZE 3 
 
 int main()
 {
     int A[SIZE][SIZE];
     int B[SIZE][SIZE]; 
     int C[SIZE][SIZE];
     
     int row, col, i, sum;
 
 
     printf("Enter elements in matrix A of size %dx%d: \n", SIZE, SIZE);
     for(row=0; row<SIZE; row++)
     {
         for(col=0; col<SIZE; col++)
         {
             scanf("%d", &A[row][col]);
         }
     }
 
     printf("\nEnter elements in matrix B of size %dx%d: \n", SIZE, SIZE);
     for(row=0; row<SIZE; row++)
     {
         for(col=0; col<SIZE; col++)
         {
             scanf("%d", &B[row][col]);
         }
     }
      //Task: Multiply both matrices A*B
     for(row=0; row<SIZE; row++)
     {
         for(col=0; col<SIZE; col++)
         {
             sum = 0;
             
             for(i=0; i<SIZE; i++)
             {
                 sum += A[row][i] * B[i][col];
             }
 
             C[row][col] = sum;
         }
     }
 
     printf("\nProduct of matrix A * B = \n");
     for(row=0; row<SIZE; row++)
     {
         for(col=0; col<SIZE; col++)
         {
             printf("%d ", C[row][col]);
         }
         printf("\n");
     }
 
     return 0;
 }