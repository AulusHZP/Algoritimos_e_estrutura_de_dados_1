#include <stdio.h>
int main(){
 // variaveis
  int n = 0; // quantidade do teclado
  int x = 0; // quantidade do for

  // usuario
  printf("\nDigite um numero que para apresentar a quantidade de multiplos de 9:\n");
  scanf("%i", &n);

  for (x = 1; x <= n; x++) {
    printf("\n%i\n", 9 * x);
  }
  // fim do for
  return 0;
}