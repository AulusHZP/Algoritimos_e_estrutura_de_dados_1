#include "io.h"

void method00 ( )
{
  
}

void method01a (int x)
{
  if (x >= 9)
  {
    method01a (x - 2);
    IO_printf ("%s%d\n", "Valor = ", x);
  } 
} 

int method01 ( )
{
  method01a (17); 
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
    if (x % 9 == 0)
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

int method05a (int x)
{
  int soma = 0;
  if (x >= 9)
  {
    soma = soma + method05a (x - 2);
    IO_printf ("%s%d\n", "Valor = ", x);
    soma = soma + x;
  } 
  return soma;
} 

void method05 ( )
{
  printf ("\nSoma = %i\n", method05a (17));
  IO_pause ("Apertar ENTER para continuar");
} 

double method06a (double x)
{
  double soma = 0.0;
  if (x >= 9.0)
  {
    soma = soma + method06a (x - 2.0);
    IO_printf ("%s%lf\n", "\nValor = 1 /  ", x);
    IO_printf ("%s%lf\n", "Valor =  ", (1 / x));
    soma = soma + 1.0 / x;
  } 
  return soma;
} 

void method06 ( )
{
  printf ("\nSoma = %lf\n", method06a (17));
  IO_pause ("Apertar ENTER para continuar");
}   

void method07a (chars cadeia, int x)
{
  if ((0 <= x) && (x < strlen (cadeia)))
  {
    if ((cadeia [x] >= 'a') && (cadeia [x] <= 'z'))
    {
      method07a ("abcde", x - 1);
    } 
    printf ("\n%c", cadeia [x]);
  } 
} 

void method07 ( )
{
  chars cadeia;
  int x = strlen (cadeia) + 3;
  method07a ("abcde", x);
  IO_pause ("\nApertar ENTER para continuar");
}

void method08a (chars cadeia, int x)
{
  if ((0 <= x) && (x < strlen (cadeia)))
  {
    if (((cadeia [x] >= 'a') && (cadeia [x] <= 'z')) || ((cadeia [x] >= 'A') && (cadeia [x] <= 'Z')) || ((cadeia [x] >= '0') && (cadeia [x] <= '9')))
    {
      if ((cadeia [x] == '0') || (cadeia [x] == '2') || (cadeia [x] == '4') || (cadeia [x] == '6') || (cadeia [x] == '8'))
      {
        printf ("\n%c", cadeia [x]);
      }
    } 
    method08a ("P4LaVr@1", x - 1);
  } 
} 

void method08 ( )
{
  chars cadeia;
  int x = strlen (cadeia) + 6;
  method08a ("P4LaVr@1", x);
  IO_pause ("\nApertar ENTER para continuar");
}

int main(void) 
{
  int opcao = 0;
  printf ( "\nOpcoes" );
  printf ("\n\n0 - parar" );
  printf ("\n1 - mostrar valores impares em ordem crescente comecando do 9");
  printf ("\n2 - mostrar multiplos de 9 em ordem decrescente");
  printf ("\n3 - mostrar o 1 e os multiplos de 9 em ordem crescente");
  printf ("\n4 - mostrar potencias de 9 decrescentes sobre 1");
  printf ("\n5 - mostrar a soma de valores impares em ordem crescente comecando do 9");
  printf ("\n6 - mostrar a soma de valores impares em ordem crescente comecando do 1 / 9");
  printf ("\n7 - mostrar os simbolos separados de uma cadeia de caracteres");
  printf ("\n8 - mostrar os digitos pares de uma cadeia de caracteres");
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
      case 5:
      method05();
      break;
      case 6:
      method06();
      break;
      case 7:
      method07();
      break;
      case 8:
      method08();
      break;
      default:
      printf ("\nERRO: Valor invalido");
    } 
  }
  while (opcao != 0);
  IO_pause ("Apertar ENTER para terminar");
  
  return 0;
}