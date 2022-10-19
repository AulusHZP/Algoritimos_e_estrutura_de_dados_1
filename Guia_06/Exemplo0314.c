#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
  int y = 0;
  char c = 'A';
  char palavra [10];
  int tamanho = 0;
  int contador = 0;
  printf ("\nDigite uma palavra: ");
  gets(palavra);
  tamanho = strlen (palavra);
  for (y = 0; y < tamanho; y = y + 1)
  {
    c = palavra [y];
    if ((('A' <= c) && (c <= 'Z')) || (('a' <= c) && (c <= 'z')))
    {
      printf ("\n%d: [%c]\n", y, c);
      contador++;
    }
  }
  printf ("\nTem %i letras maiusculas e minúsculas.", contador);
  
  return 0;
}