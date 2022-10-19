#include <stdio.h>
int main(){
int n = 0;
  int contador = 0;
  int i = 0;
  printf ("\nDigite uma quantidade de valores: ");
  scanf ("%i", &n);
  for (i = 1; i <= n; i++)
  {
    if ((9 * i) %5 != 0)
    {
      printf ("\nOs multiplos impares de 9 em ordem crescente sao: %i\n", 9 * i);
      contador += 9 * i;
    }
  }
  printf ("\nA soma dos valores e : %i", contador);
  return 0;
}