/*
Exemplo0210 - v0.0. - 09 / 09 / 2022
Author:Áulus_Batista_(764688) 
*/
#include <stdio.h>
int main()
{
  printf("\n Dizer se o primeiro é ímpar e negativo, e se o segundo é par e positivo.");
  int num;
  int num2;
  
    printf("\nInforme os números: ");
    scanf ("%i""%i",&num,&num2);
if (num % 2 == 0){
    printf ("\nO número %i é par e",num);
}else {
    printf("\nO número %i é impar e",num);
      }if(num >= 0){
        printf("\n Numero positivo");
      }else{
        printf("\n Numero negativo");
      }

  
if (num2 % 2 == 0){
    printf ("\nO número %i é par e",num2);
}else {
    printf("\nO número %i é impar e",num2);
}
  if(num >= 0){
        printf("\n Numero positivo");
      }else{
        printf("\n Numero negativo");
      }
return 0;
}