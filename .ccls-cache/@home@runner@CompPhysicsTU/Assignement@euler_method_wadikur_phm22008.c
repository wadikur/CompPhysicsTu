/*
This is the Computation physics and numerical analysis Test 3 assignment. We
need to use Euler method to solve ordinary linear differential equation.
*/
#include <stdio.h>

int main() {
  float x, y, h, u_x;
  int i, n;

  // Intializing the variable
  x = 0;
  y = 1;
  h = 0.05;
  // Asking for user input for which we want to calculate.
  // we will store it in the variable u_x
  // The user input for x has to be multiple of h.
  // Else it will give error.

  printf("Enter the value of x for which you want to find function\n");
  scanf("%f", &u_x);
  n = u_x / h;
  // n will give us how many step
  for (i = 1; i <= n; i++) {
    y = y + h * (x + y);
    x=x+h
  }
  printf("The value of y at %f is %f", u_x, y);
  return 0;
}