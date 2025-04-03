/**
 * C program to interchange diagonals of a matrix
 */
 
 #include <stdio.h>
 #define MAX_ROWS 3
 #define MAX_COLS 3
 
 int main()
 {
     int A[MAX_ROWS][MAX_COLS];
     int row, col, size, temp;
  
     printf("Enter elements in matrix of size %dx%d: \n", MAX_ROWS, MAX_COLS);
     for(row=0; row<MAX_ROWS; row++)
     {
         for(col=0; col<MAX_COLS; col++)
         {
             scanf("%d", &A[row][col]);
         }
     }
 
     size = (MAX_ROWS < MAX_COLS) ? MAX_ROWS : MAX_COLS;
  
     
     for(row=0; row<size; row++)
     {
         col = row;
  
         temp = A[row][col];
         A[row][col] = A[row][(size-col) - 1];
         A[row][(size-col) - 1] = temp;
     }
  
    
     printf("\nMatrix after diagonals interchanged: \n");
     for(row=0; row<MAX_ROWS; row++)
     {
         for(col=0; col<MAX_COLS; col++)
         {
             printf("%d ", A[row][col]);
         }
  
         printf("\n");
     }
  
     return 0;
 }