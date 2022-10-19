#include "io.h"

void method00 ( )
{
  
}

void method01a (int x)
{
  if ( x >= 9 )
  {
    method01a (x - 2);
    IO_printf ("%s%d\n", "Valor = ", x);
  } 
} 

void method01 ( )
{
  method01a (17); 
  IO_pause ("Apertar ENTER para continuar");
}  

int main(void) 
{
  int opcao = 0;
  printf ("\nOpcoes");
  printf ("\n\n0 - parar");
  printf ("\n1 - mostrar valores impares em ordem crescente comecando do 9");
  printf ("");
  do
  {
    printf ("\n\nDigite sua opcao: ");
    scanf ("%i", &opcao);
    switch (opcao)
    {
      case 0:
      method00 ();
      break;
      case 1:
      method01 ();
      break;
      default:
      printf ("\nERRO: Valor invalido");
    } 
  }
  while (opcao != 0);
  IO_pause ("Apertar ENTER para terminar");
  
  return 0;
}