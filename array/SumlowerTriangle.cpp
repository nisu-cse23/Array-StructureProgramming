/**
 * C program to find sum of lower triangular matrix
 */

 #include <stdio.h>
 #define MAX_ROWS 3
 #define MAX_COLS 3
 
 int main()
 {
     int A[MAX_ROWS][MAX_COLS];
     int row, col, sum = 0;
 
     printf("Enter elements in matrix of size %dx%d: \n", MAX_ROWS, MAX_COLS);
     for(row=0; row<MAX_ROWS; row++)
     {
         for(col=0; col<MAX_COLS; col++)
         {
             scanf("%d", &A[row][col]);
         }
     }
 
     /*Task: Find sum of lower triangular matrix */
     for(row=0; row<MAX_ROWS; row++)
     {
         for(col=0; col<MAX_COLS; col++)
         {
             if(col<row)
             {
                 sum += A[row][col];
             }
         }
     }
 
     printf("Sum of lower triangular matrix = %d", sum);
 
     return 0;
 }