/******************************************************************************
Date: 15/12/2022
First computational lab. First program
Sum of two integer. Program asks the user for input and prints the output.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int a, b, c;
  printf ("Enter the first integer: ");
  scanf ("%d", &a);
  printf ("Enter the second integer: ");
  scanf ("%d", &b);
  c = a + b;
  printf ("The sum is %d \n ", c);
}
