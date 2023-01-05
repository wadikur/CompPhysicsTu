/******************************************************************************
Date: 15/12/2022
Second computational lab. First program
Product of two Matrix. Program asks the user for input and prints the output.

*******************************************************************************/

#include <stdio.h>

int main() {
  int i, j, k, m = 2;
  int a[m][m], b[m][m], c[m][m];
  for (i = 0; i <= m - 1; i++ )
    for (j = 0; j <= m - 1; j++) {
      printf("Enter the a[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
      printf("Enter the b[%d][%d]: ", i, j);
      scanf("%d", &b[i][j]);
    }
  for (i = 0; i <= m - 1; i++) {
    for (j = 0; j <= m - 1; j++) {
      c[i][j] = 0;
      for (k = 0; k <= m - 1; k++)
        c[i][j] = c[i][j] + a[i][k] * b[k][j];
    }
  }
  printf("The sum of the matrix is \n");
  for (i = 0; i <= m - 1; i++) {
    for (j = 0; j <= m - 1; j++) {
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}