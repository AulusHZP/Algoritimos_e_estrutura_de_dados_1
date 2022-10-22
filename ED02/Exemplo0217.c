#include <stdio.h>

int main(void) {
  int numero1 = 0;
  printf("\nDigite o primeiro numero: ");
  scanf("%i", &numero1);
  int numero2 = 0;
  printf("\nDigite o segundo numero: ");
  scanf("%i", &numero2);
  if ((numero1 %2 !=0) && (numero1 < 0))
  {
    printf ("\n\nO primeiro numero 'e impar e negativo.\n");
  }
  else
  {
    printf ("\n\nO primeiro numero nao 'e impar e negativo.\n");
  }
  if ((numero2 %2 == 0) && (numero2 > 0))
  {
    printf ("\nO segundo numero 'e par e positivo.");
  }
  else
  {
    printf ("\nO segundo numero nao 'e par e positivo.");
  }
  
  return 0;
}