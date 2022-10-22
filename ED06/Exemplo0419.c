#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool alfanumerico (char c)
{
  bool alfanumerico = false;
  if (((c >= '0') && (c <= '9')) || ((c >= 'A') && (c <= 'Z') || (c >= 'a') && (c <= 'z')))
  {
    alfanumerico = true;
  }
  return alfanumerico;
}

int quantidade (char c)
{
  int y = 0;
  c = 'A';
  char palavra [80];
  int tamanho = 0;
  int contador = 0;
  printf ("\nDigite uma palavra: ");
  scanf ("%s", palavra);
  getchar();
  tamanho = strlen (palavra);
  for (y = 0; y < tamanho; y = y + 1)
  {
    c = palavra [y];
    if (alfanumerico(c))
    {
      printf ("\n%d: [%c]\n", y, c);
      contador++;
    }
  }
  return contador;
}

int main ()
{
  char c = 'A';
  printf("\nTem %i simbolos alfanumericos.", quantidade(c));

  return 0;
}