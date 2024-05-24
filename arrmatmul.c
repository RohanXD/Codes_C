#include <stdio.h>
void inp(int mat[][10], int r, int c); 
void mulmat(int ar1[][10],
			int ar2[][10],
			int mul[][10],
			int r1, int c1, 
			int r2, int c2);
void out(int mul[][10], int r, int c);
int main() 
{
   int ar1[10][10], ar2[10][10], mul[10][10], r1, c1, r2, c2;
   printf("Enter rows and column for the first matrix: ");
   scanf("%d %d", &r1, &c1);
   printf("Enter rows and column for the second matrix: ");
   scanf("%d %d", &r2, &c2);
   // Taking input until
   // 1st matrix columns is not equal to 2nd matrix row
   while (c1 != r2) 
   {
      printf("Error! Enter rows and columns again.\n");
      printf("Enter rows and columns for the first matrix: ");
      scanf("%d%d", &r1, &c1);
      printf("Enter rows and columns for the second matrix: ");
      scanf("%d%d", &r2, &c2);
   }
   // get elements of the first matrix
   printf("\nEnter elements of first matrix:\n");
   inp(ar1, r1, c1);
   printf("\nFirst matrix:\n\n");
   out(ar1, r1, c1);
   // get elements of the second matrix
   printf("Enter elements of second matrix:\n");
   inp(ar2, r2, c2);
   printf("\nSecond matrix:\n\n");
   out(ar2, r2, c2);
   // multiply two matrices.
   mulmat(ar1, ar2, mul, r1, c1, r2, c2);
   // display the result
   printf("Multiplication of two Matrix is:\n\n");
   out(mul, r1, c2);
   getch();  
   return 0;
}
void inp(int mat[][10], int r, int c) 
{
	int i,j;
	for (i = 0; i < r; ++i) 
	{
    	for (j = 0; j < c; ++j) 
		{
        	printf("Enter a%d%d: ", i + 1, j + 1);
        	scanf("%d", &mat[i][j]);
    	}
   }
}
// function to multiply two matrices
void mulmat(int ar1[][10],
			int ar2[][10],
			int mul[][10],
			int r1, int c1,
			int r2, int c2)
{
    // Initializing elements of matrix mul to 0.
	int i,j,k;
	for (i = 0; i < r1; ++i) 
	{
    	for (j = 0; j < c2; ++j) 
		{
        	mul[i][j] = 0;
    	}
   }
   // Multiplying first and second matrices and storing it in mul
   for (i = 0; i < r1; ++i) 
   {
      for (j = 0; j < c2; ++j) 
	  {
         for (k = 0; k < c1; ++k) 
		 {
            mul[i][j] += ar1[i][k] * ar2[k][j];
         }
      }
   }
}

// function to display the matrix
void out(int mul[][10], int r, int c)
{
	int i,j;
	for (i = 0; i < r; ++i) 
	{
    	for (j = 0; j < c; ++j) 
		{
        	printf("%d\t", mul[i][j]);
        }
    	printf("\n\n");
   }
}
