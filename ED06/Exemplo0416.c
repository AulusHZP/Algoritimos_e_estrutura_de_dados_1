#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool maiuscula_e_minuscula (char c)
{
  bool maiuscula_e_minuscula = false;
  if ((c >= 'A') && (c <= 'Z') || (c >= 'a') && (c <= 'z'))
  {
    maiuscula_e_minuscula = true;
  }
  return maiuscula_e_minuscula;
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
    if (maiuscula_e_minuscula(c))
    {
      if ((c > 'J') || (c > 'j'))
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
  printf("\nTem %i letras maiores que 'J' e 'j'.", quantidade(c));

  return 0;
}