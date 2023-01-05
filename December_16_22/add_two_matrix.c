/******************************************************************************
Date: 15/12/2022
First computational lab. Second program
Sum of two Matrix. Program asks the user for input and prints the output.

*******************************************************************************/

#include <stdio.h>

int main() {
  int i, j, m = 2;
  int a[m][m], b[m][m], c[m][m];
  for (i = 0; i <= m - 1; i = i + 1)
    for (j = 0; j <= m - 1; j = j + 1) {
      printf("Enter the a[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
      printf("Enter the b[%d][%d]: ", i, j);
      scanf("%d", &b[i][j]);
      c[i][j] = a[i][j] + b[i][j];
    }
  printf("The sum of the matrix is \n");
  for (i = 0; i <= m - 1; i = i + 1) {
    for (j = 0; j <= m - 1; j = j + 1) {
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }
}