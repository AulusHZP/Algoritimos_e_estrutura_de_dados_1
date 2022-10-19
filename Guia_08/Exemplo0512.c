#include <stdio.h>
int main(){
 int n = 0;
  int j = 0;
  printf ("\nDigite uma quantidade de valores: ");
  scanf ("%i", &n);
  for (j = 1; j <= n; j++)
  {
    if ((9 * j) %2 != 0)
    {
      printf ("\nOs multiplos de 9 são: %i\n", 9 * j);
    }
  }
  return 0;
}