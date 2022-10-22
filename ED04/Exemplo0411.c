#include <stdio.h>
#include <stdbool.h>

int main() {
  double a = 0.0;
  double b = 0.0;
  int n = 0;
  double x = 0.0;
  int contador1 = 0;
  int contador2 = 0;
  printf ("\nDigite o limite inferior: ");
  scanf ("%lf", &a);
  printf ("\nDigite o limite superior: ");
  scanf ("%lf", &b);
  bool ERRO = (a > b);
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
        printf ("\n[%i] = %lf\n\n", i, x);
        contador1++;
      }
      else
      {
        printf ("\n[%i] = %lf\n\n", i, x);
        contador2++;
      }
    }
    printf ("\nDentro os numeros, %i estao fora do intervalo.\n", contador1);
    printf ("\nDentro os numeros, %i estao dentro do intervalo.", contador2);
  }
  
  return 0;