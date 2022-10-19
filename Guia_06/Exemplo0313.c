#include <stdio.h>
#include <string.h>

int main() {
  char palavra[10];
  int y = 0;
  int tamanho = 0;
  char c = 'A';
  int contador =0;
  printf("\n Digite uma palavra:");
  gets(palavra);
  tamanho = strlen (palavra);
  for (y = tamanho, -1; y >= 0; y = y - 1)
  {
    c = palavra [y];
    if (('A' <= c) && (c <= 'Z'))
    {
      printf ("\n%d: [%c]\n", y, c);
      contador = tamanho -1;
    }
    contador++;
  }
 printf ("\nTem %i letras maiusculas.", contador);
return 0;
}