#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
  int y = 0;
  char c = 'A';
  char palavra [10];
  int tamanho = 0;
  int contador = 0;
      printf ("\nDigite uma palavra: ");
      gets(palavra);
  tamanho = strlen (palavra);
  for (y = tamanho - 1; y >= 0; y = y - 1)
  {
    c = palavra [y];
    printf ("\n%d: [%c]\n", y, c);
    contador = tamanho - 1;
    contador++;
  }
  printf ("\nTem %i letras maiusculas e minúsculas.", contador);
  
  return 0;
}