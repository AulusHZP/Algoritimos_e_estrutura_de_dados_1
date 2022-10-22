#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool maiuscula (char c)
{
  bool maiuscula = false;
  if ((c > 'A') && (c < 'Z'))
  {
    maiuscula = true;
  }
  return maiuscula;
}

int main ()
{
  int y = 0;
  char c = 'A';
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
  printf ("\nTem %i letras maiores que 'J'.", contador);
  return 0;  
}