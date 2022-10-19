#include <stdio.h>

int main() {
  //Exemplo0101 - v0.0. - 10/08/2022
  //Author:Áulus Batista
  
  printf("\nParalelepípedo,");
  int comprimeto = 3.0;
  int largura = 4.0;
  int altura= 5.0;
  int volume = (comprimeto*largura*altura);
  int volume7 = (comprimeto*largura*altura)*7;

  
  printf("\n %i - Volume",volume);
  printf("\n %i - Volume vezes 7",volume7);
  
  return 0;
}