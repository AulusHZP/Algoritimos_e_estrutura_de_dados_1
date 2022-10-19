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
//usuario  
  printf("\nDigite o primeiro limite[]:");
  scanf("%d", &limiteA);
  printf("\nDigite o segundo limite[]:");
  scanf("%d", &limiteB);
  printf("\nDigite a quantidade de teste:");
  scanf("%i", &teste);
 //------------------------------------------
  do{
  if(limiteA < limiteB)
    printf("\nDigite a quantidade de teste:");
  scanf("%i", &teste);
    for(int i = 0; i < teste; i++){
      printf("\n Digite um número:\n");
      scanf("%i", &x);
      if( (x%5 == 0.0) && (x>limiteA) && (x<limiteB))
        {
        contador ++;
           printf("\nDentro os números. %i são multiplos de 2 dentro do intervalo e não multiplos de 3 e estão dentro do intervalo");
        }
      }
    }while(!(limiteA < limiteB));
      printf("\N O limite inferior é maior que o limite superior");
  return 0;
}