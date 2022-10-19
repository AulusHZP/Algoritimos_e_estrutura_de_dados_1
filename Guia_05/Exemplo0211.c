/*
Exemplo0210 - v0.0. - 09 / 09 / 2022
Author:Áulus_Batista_(764688) 
*/
// dependencias
#include "io.h" // para definicoes proprias
#include "stdio.h"

int main()
{
  printf("\n Verificar se um numero é par ou impar");
  int num;
  printf ("\n Digite um número:");
  scanf("%i",&num);
    if(num % 2 ==0)
    {
      printf("\nO número é par");
    }else{
      printf("\nO número é impar");
    }
}

