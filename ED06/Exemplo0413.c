#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool maiuscula (char c)
{
  bool maiuscula = false;
  if ((c >= 'A') && (c <= 'Z'))
  {
    maiuscula = true;
  }
  return maiuscula;
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
    if (maiuscula(c))
    {
      if (c > 'J')
      {
        printf ("\n%d: [%c]\n", y, c);
        contador++;
      }
    }
  }
  return contador;
}

int main ()
{
  char c = 'A';
  printf("\nTem %i letras maiores que 'J'.", quantidade(c));

  return 0;
}