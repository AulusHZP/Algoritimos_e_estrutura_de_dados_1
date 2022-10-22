#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main() {
  int contador = 0;
  double limiteA = 0;
  double limiteB = 0;
  int teste = 0;
  int x = 0;
  
  printf("\nDigite o primeiro limite[]:");
  scanf("%d", &limiteA);
  printf("\nDigite o segundo limite[]:");
  scanf("%d", &limiteB);
  printf("\nDigite a quantidade de teste:");
  scanf("%i", &teste);
    for(int i = 0; i < teste; i++){
      printf("\n Digite um número:\n");
      scanf("%i", &x);
      if( (x%2 == 0)&& ( x%3 != 3) && (x>limiteA) && (x<limiteB))
        {
        contador ++;
           printf("\nDentro os números. %i são multiplos de 2 dentro do intervalo e não são multiplos de 3");
        }
      }
  return 0;
}