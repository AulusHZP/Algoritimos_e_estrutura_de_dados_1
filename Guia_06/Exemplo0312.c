#include <stdio.h>
#include <string.h>

int main() {
  char palavra[10];
  char c = 'a';
  int tamanho = 0;
  int y = 0;
    printf("\nDigite uma palavra:\n");
    gets(palavra);
    tamanho = strlen (palavra);
  for (y = 0; y < tamanho; y = y + 1)
  {
    c = palavra [y];
    if (('a' <= c) && (c <= 'z'))
    {
      printf ("\n%d: [%c]\n", y, c);
    }
  }
  
return 0;
}