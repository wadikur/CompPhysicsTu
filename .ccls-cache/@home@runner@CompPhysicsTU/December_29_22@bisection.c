/*****************
This is the second program of 29th December.
Write a code which implements bisection method in c programming.
********/
#include <stdio.h>

// Declare the function
float def_func(float x);

int main() {
  float lower, upper, mid_0, mid_1;
  printf("Enter the lower limit of the interval");
  scanf("%f",&lower);
  printf("Enter the upper limit of the interval");
  scanf("%f",&uppper)
  
  if (def_func(lower) * def_func(upper) < 0) {

  mid_0 = lower;
  mid_1 = upper;
    while (abs(mid - mid_1) < 0.00001) {
      mid_0 = mid_1;
      mid_1 = (lower + upper) / 2.0;
      if (def_func(lower) * def_func(mid_1) < 0)
        upper = mid_1;
      else
        lower = mid_1;
    }
    printf("The solution is %f", mid_1);
  }
  else{
    printf("This initial range won't work, as there may not be any solution.");
  }
  return 0;
}
// Defining the function
def_func(float x) { return (exp(x) - pow(x, 3) - cos(25 * x)) }