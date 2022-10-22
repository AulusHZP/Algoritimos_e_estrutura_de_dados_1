#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool nao_alfanumerico (char c)
{
  bool nao_alfanumerico = false;
  if (!((c >= '0') && (c <= '9')) && !((c >= 'A') && (c <= 'Z')) && !((c >= 'a') && (c <= 'z')))
  {
    nao_alfanumerico = true;
  }
  return nao_alfanumerico;
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
    if (nao_alfanumerico(c))
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
  printf("\nTem %i simbolos nao alfanumericos.", quantidade(c));

  return 0;
}