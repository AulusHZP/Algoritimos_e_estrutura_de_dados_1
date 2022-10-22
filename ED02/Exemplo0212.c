#include <stdio.h>

/*
Exemplo0210 - v0.0. - 09 / 09 / 2022
Author:Áulus_Batista_(764688) 
*/
// dependencias
#include "stdio.h"

int main()
{
int num;
float par = -30;
float impar = 30;
printf("\nInforme o número: ");
scanf ("%i",&num);

if (num % 2 == 0){
  printf ("\nO número %i é par e",num);
    if (par >= -30)
      {printf("É maior ou igual a -30");}
        else 
          {printf("\nMenor que -30");}  
  }

else{
    printf("\nO número %i é impar e",num);
      if (impar >= 30)
        {printf("\nÉ maior ou igual a 30");}
          else
            {printf("\nMenor que 30");}  
            
    }  
}