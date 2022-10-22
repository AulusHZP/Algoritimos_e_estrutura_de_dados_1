#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool digito (char c)
{
  bool digito = false;
  if ((c >= '0') && (c <= '9'))
  {
    digito = true;
  }
  return digito;
}

bool par (char c)
{
  bool par = false;
  if (c %2 == 0)
  {
    par = true;
  }
  return par;
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
    if (digito(c))
    {
      if (par(c))
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
  printf("\nTem %i digitos pares.", quantidade(c));

  return 0;
}