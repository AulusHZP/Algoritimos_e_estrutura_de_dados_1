#include <stdio.h>
#include <string.h>

int main() {
  char palavra[10];
  int y = 0;
  int tamanho = 0;
  char c = 'A';
  printf("\n Digite uma palavra:");
  gets(palavra);
  tamanho = strlen (palavra);
  for (y = 0; y < tamanho; y = y + 1)
  {
    c = palavra [y];
    if (('A' <= c) && (c <= 'Z'))
    {
      printf ("\n%d: [%c]\n", y, c);
    }
  }
return 0;
}