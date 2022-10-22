#include <stdio.h>

int main() {
  //Exemplo0101 - v0.0. - 10/08/2022
  //Author:Áulus Batista
  
  printf("\nEsfera");
  int raio = 5.0;
  int volume = (4*3.14*5*5*5.0)/3;
  int volume1 = ((4*3.14*5*5*5.0)/3)/0.625;

  
  printf("\n %i - Volume",volume);
  printf("\n %i - Volume 5/8",volume1);
  return 0;
}