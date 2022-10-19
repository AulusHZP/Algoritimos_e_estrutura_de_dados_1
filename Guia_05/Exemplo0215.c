#include <stdio.h>

int main(void) {
  int numero = 0;
  printf("\nDigite um numero: ");
  scanf("%i", &numero);
  if ((numero >= 15) && (numero <= 30)) 
  {
    printf("\n\nO numero esta dentro do intervalo entre 15 e 30.\n");
    if ((numero >= 25) && (numero <= 40))
    {
      printf("\nO numero esta dentro do intervalo entre 15 e 30 e entre 25 e 40.");
    }
  } else if ((numero >= 25) && (numero <= 40))
    {
      printf("\n\nO numero esta dentro do intervalo entre 25 e 40.");
    }
  else 
  {
    printf("\n\nO numero nao esta dentro do intervalo entre 15 e 30 nem entre 25 e 40.");
  }
  
  return 0;
}