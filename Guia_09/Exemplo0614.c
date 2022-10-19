#include "io.h"

void method00 ( )
{
  
}

void method01a (int x)
{
  if (x >= 9)
  {
    method01a (x - 1); 
    IO_printf ("%s%d\n", "Valor = ", x);
  } 
} 

void method01 ( )
{
  method01a (13); 
  IO_pause ("Apertar ENTER para continuar");
} 

void method02a (int x)
{
  if ((x >1) && (x <= 45))
  {
    if (x % 9 == 0)
    {
      IO_printf ("%s%d\n", "Valor = ", x);
    } 
    method02a (x - 1);
  } 
}

void method02 ( )
{
  int quantidade = 0;
  int valor = 0;
  int controle = 0;
  method02a (45); 
  IO_pause ("Apertar ENTER para continuar");
} 

void method03a (int x)
{
  if ((x > 0) && (x <= 36))
  {
    method03a (x - 1);
    if ((x % 9 == 0))
    {
      IO_printf ("%s%d\n", "Valor = ", x );
    }
  } 
} 

void method03 ( )
{
  printf ("Valor = 1\n");
  method03a (36); 
  IO_pause ("Apertar ENTER para continuar");
} 

void method04a (double x)
{ 
  if (x >= 1)
  {
    if (pow (9, x))
    {
      IO_printf ("%s%lf\n", "Valor = 1 / ", pow (9, x));
    }
    method04a (x - 1);
  } 
} 

void method04 ( )
{
  method04a (4); 
  IO_pause ("Apertar ENTER para continuar");
} 

int main(void) 
{
  int opcao = 0;
  printf ("\nOpcoes");
  printf ("\n\n0 - parar");
  printf ("\n1 - mostrar valores impares em ordem crescente comecando do 9");
  printf ("\n2 - mostrar multiplos de 9 em ordem decrescente");
  printf ("\n3 - mostrar o 1 e os multiplos de 9 em ordem crescente");
  printf ("\n4 - mostrar potencias de 9 decrescentes sobre 1");
  printf ("");
  do
  {
    printf ("\n\nDigite sua opcao: ");
    scanf ("%i", &opcao);
    switch (opcao)
    {
      case 0:
      method00();
      break;
      case 1:
      method01();
      break;
      case 2:
      method02();
      break;
      case 3:
      method03();
      break;
      case 4:
      method04();
      break;
      default:
      printf ("\nERRO: Valor invalido");
    } 
  }
  while (opcao != 0);
  IO_pause ("Apertar ENTER para terminar");
  
  return 0;
}