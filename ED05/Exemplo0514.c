#include <stdio.h>
int main(){
 int n = 0;
  int i = 0;
  printf ("\nDigite uma quantidade de valores: ");
  scanf ("%i", &n);
  for (i = 1; i <= n; i++)
  {
    printf ("\nOs multiplos de 9 em ordem crescente sao: 1/%i\n", 9 * i);
  }
  return 0;
}