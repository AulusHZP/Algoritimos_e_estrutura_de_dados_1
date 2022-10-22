#include <stdio.h>

int main() {
  printf("\nRetângulo");
  int base = 3;
  int altura = 5;
  int area = base*altura;
  int perimetro = (2*base+2*altura);
  int perimetropor2 = perimetro/2;
  
  
  printf("\n O perimetro do retângulo é %i e a metade dela é %i",perimetro,perimetropor2);
  return 0;
}