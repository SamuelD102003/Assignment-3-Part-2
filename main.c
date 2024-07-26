#include <stdio.h>
#include <math.h>
int main(void) {
  double a,b,c,d,x1,x2;
  printf("Enter the values of a, b and c of your quadratic equation:");
  scanf(" %lf %lf %lf", &a, &b, &c);
  d = pow(b,2) - 4*(a*c);
  if (d>0)
  {
    x1 = (-b+(sqrt(d)))/(2*a);
    x2 = (-b-(sqrt(d)))/(2*a);
  }
  else if (fabs(d)<1.0e-3)
  {
    x1 = (-b+(sqrt(d)))/(2*a);
    x2 = (-b-(sqrt(d)))/(2*a);
  }
  else if (d<0)
  {
    x1 = (-b+(sqrt(fabs(d))))/(2*a);
    x2 = (-b-(sqrt(fabs(d))))/(2*a);
  }
  if (d>0)
  {
    printf("The solutions to the quadratic equation would be x=%.4lf and x=%.4lf" ,x1,x2);
  }
  else if (fabs(d)<1.0e-5)
  {
    printf("The only solution to the quadratic equation would be x=%.4lf" ,x1);
  }
  else if (d<0)
  {
    printf("The solutions to the quadratic equation are imaginary numbers and they are x=%.4lfj and x=%.4lfj",x1,x2);
  }

  return 0;
}