#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdbool.h>

int main(void) {
  double a = 0.0;
  double b = 0.0;
  int n = 0;
  double x = 0.0;
  int contador = 0;
  printf ("\nDigite o limite inferior: ");
  scanf ("%lf", &a);
  printf ("\nDigite o limite superior: ");
  scanf ("%lf", &b);
  bool ERRO = ((a < 0) || (b > 1) || (a > b));
  if (ERRO)
  {
    printf ("\nO limite inferior e menor que 0 ou o limite superior e maior que 1.\n");
  }
  else
  {
    printf ("\nDigite uma quantidade: ");
    scanf ("%i", &n);
    for (int i = 0; i < n; i++)
    {
      printf ("\nDigite um numero: ");
      scanf ("%lf", &x);
      if ((x < a) || (x > b))
      {
        printf ("\n[%i] = %lf\n", i, x);
        contador++;
      }
    }
    printf ("\nDentro os numeros, %i estao fora do intervalo.", contador);
  }
  
  return 0;
}