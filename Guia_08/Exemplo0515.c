#include <stdio.h>
int main(){
int n = 0;
double x = 0.0;
  int n = 0;
  int i = 0;
  printf ("\nDigite uma quantidade de valores: ");
  scanf ("%i", &n);
  printf ("\nDigite um valor: ");
  scanf ("%lf", &x);
  for (i = 1; i <= n; i++)
  {
    printf ("\nOs multiplos de x sao: 1 / %lf\n", pow (x, i));
  }
  return 0;
}