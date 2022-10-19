/*
Exemplo0701 - v0.0. - 16 / 10 / 2022
Author: Áulus Batista
*/

// dependencias
#include "io.h" // para definicoes proprias

void method00 (){
  
}
//--------------------------------------------------------------------------------
void multiplos5 (chars fileName, int y){
  // definir dados
  FILE* arquivo = fopen (fileName, "wt");
  int n = 0;

  printf ("\nDigite um numero: ");
  scanf ("%i", &n);
  
  // repetir para a quantidade de dados
  for (y = 5; y <= n * 10; y = y + 10)
  {
    if ((y % 5 == 0) && (y % 2 != 0))
    {
      // gravar valor
      fprintf (arquivo, "%d\n", y);
    }
  } // fim repetir
  
  // fechar arquivo (INDISPENSAVEL para gravacao)
  fclose (arquivo);
} 
void method01 (){
  // identificar
  IO_id ("\nEXEMPLO0711 - Method01 - v0.0");
  // executar o metodo auxiliar
  multiplos5 ("DADOS1.TXT", 10);
  // encerrar
  IO_pause ("Apertar ENTER para continuar\n");
} 
//--------------------------------------------------------------------------------
void multiplos7 (chars fileName, int y){
  // definir dados
  FILE* arquivo = fopen (fileName, "wt");
  int n = 0;

  printf ("\nDigite um numero: ");
  scanf ("%i", &n);
  
  // repetir para a quantidade de dados
  for (y = n * 14; y >= 7; y = y - 7)
  {
    if ((y % 7 == 0) && (y % 2 == 0))
    {
      // gravar valor
      fprintf (arquivo, "%d\n", y);
    }
  } // fim repetir
  
  // fechar arquivo (INDISPENSAVEL para gravacao)
  fclose (arquivo);
} 
void method02 (){
  // identificar
  IO_id ("\nEXEMPLO0712 - Method02 - v0.0");
  
  // executar o metodo auxiliar
  multiplos7 ("DADOS2.TXT", 10);
  
  // encerrar
  IO_pause ("Apertar ENTER para continuar\n");
} 
//-------------------------------------------------------------------------------
void sequencia (chars fileName, double y){
  // definir dados
  FILE* arquivo = fopen (fileName, "wt");
  int n = 0;

  printf ("\nDigite um numero: ");
  scanf ("%i", &n);
  
  // repetir para a quantidade de dados
  for (y = 0.0; y < n; y++)
  {
    double x = pow (3.0, y);
    // gravar valor
    fprintf (arquivo, "%lf\n", x);
  } // fim repetir
  
  // fechar arquivo (INDISPENSAVEL para gravacao)
  fclose (arquivo);
} // fim writeInts ()
void method03 (){
  // identificar
  IO_id ("\nEXEMPLO0713 - Method03 - v0.0");
  
  // executar o metodo auxiliar
  sequencia ("DADOS3.TXT", 10);
  
  // encerrar
  IO_pause ("Apertar ENTER para continuar\n");
} 
//-------------------------------------------------------------------------------
void sequenciaDecrescenteDecimal (chars fileName, double y){
  // definir dados
  FILE* arquivo = fopen (fileName, "wt");
  int n = 0;
    printf ("\nDigite um numero: ");
    scanf ("%i", &n);
  // repetir para a quantidade de dados
    for (y = 4.0; y <= n; y--){
    double x = pow (4.0, y);
    // gravar valor
    fprintf (arquivo, "%lf\n", x);
    } // fim repetir
  
  fclose (arquivo);
}
void method04 (){
  // identificar
  IO_id ("\nEXEMPLO0714 - Method04 - v0.0");
  
  // executar o metodo auxiliar
  sequenciaDecrescenteDecimal ("DADOS4.TXT", 10);
  
  // encerrar
  IO_pause ("Apertar ENTER para continuar\n");
} // fim method04 ()
//-------------------------------------------------------------------------------
void sequencia_Reais (chars fileName, int y){
  // definir dados
  FILE* arquivo = fopen (fileName, "wt");
  int n = 0;
  int x = 0;

  printf ("\nDigite uma quantidade: ");
  scanf ("%i", &n);

  printf ("\nDigite um numero: ");
  scanf ("%i", &x);
  
  // repetir para a quantidade de dados
  for (y = 0; y <= n + 2; y++)
  {
    if (y == 0)
    {
      double z = pow (x, y);
      // gravar valor
      fprintf (arquivo, "1 / %lf\n", z);
    }
    else if (y % 2 != 0)
    {
      double z = pow (x, y);
      // gravar valor
      fprintf (arquivo, "1 / %lf\n", z);
  
      if (y == 0)
      {
        fclose (arquivo);
      }
    }
  } // fim for
  fclose (arquivo);
} 
void method05 (){
  // identificar
  IO_id ("\nEXEMPLO0715 - Method05 - v0.0");
  
  // executar o metodo auxiliar
  sequencia_Reais ("DADOS5.TXT", 10);
  
  // encerrar
  IO_pause ("Apertar ENTER para continuar\n");
} 
//-------------------------------------------------------------------------------
void Sequencia_Reais (chars fileName, int y){
  // definir dados
  FILE* arquivo = fopen (fileName, "wt");
  int n = 0;
  int x = 0;

  printf ("\nDigite uma quantidade: ");
  scanf ("%i", &n);

  printf ("\nDigite um numero: ");
  scanf ("%i", &x);
  
  // repetir para a quantidade de dados
  for (y = 0; y <= n + 2; y++){
    if (y == 0)
    {
      double z = pow (x, y);
      // gravar valor
      fprintf (arquivo, "1 / %lf\n", z);
    }
    else if (y % 2 != 0)
    {
      double z = pow (x, y);
      // gravar valor
      fprintf (arquivo, "1 / %lf\n", z);
  
      if (y == 0)
      {
        fclose (arquivo);
      }
    }
  } // fim for
  fclose (arquivo);
}
void method06 (){
  // identificar
  IO_id ("\nEXEMPLO0716 - Method06 - v0.0");
  
  // executar o metodo auxiliar
  Sequencia_Reais ("RESULTADO06.TXT", 10);
  
  // encerrar
  IO_pause ("Apertar ENTER para continuar\n");
} 
//-------------------------------------------------------------------------------
void multiplo(int x){
    FILE* arquivo = fopen ( "RESULTADO04.TXT", "r" );
    int y = 1;
    int z = 0;
    double soma = 0.0;
    int formula = 0;
 
    while ( ! feof ( arquivo ) && y < x )
 {

  formula = pow(3,y);
  
 // tentar ler
  
  fscanf ( arquivo, "%d", &z );

  soma = soma + (z * 1.0) / (formula * 1.0);

  y = y +1;
 
 }
 
    fclose(arquivo);

    FILE* arquivo2 = fopen ( "RESULTADO07.TXT", "wt" );

    fprintf(arquivo2,"\nQuantidade = %d", x);
    fprintf(arquivo2,"\nSoma = %lf", soma);

    fclose(arquivo2);
}
void method07(){
    int x=0;

    printf("\nEntre com uma quantidade: ");
    scanf("%d",&x);

    multiplo(x);
    printf("\nOs valores foram gravados no arquivo");
}
//-------------------------------------------------------------------------------
void fibonacci(chars fileName,int y){
  FILE* arquivo = fopen (fileName, "wt");
  long int a,b,c;
  int n,cont;
  double r;

  printf("Digite quantos termos da sequencia de Fibonacci voce quer:\n");
  scanf("%d", &n);

  if (n <= 1) {
    printf("Numero de termos invalido\n");
  }
  else {
    a = 1;
    b = 1;
    cont = 2;
    fprintf(arquivo,"\n\n1\n1\n");

    while(cont < n) {
      c = a + b;
      r = c;
      r = r/b;
      fprintf(arquivo,"%ld %.15lf\n", c, r);
      a = b;
      b = c;
      cont = cont + 1;
     
    }
  }
 fclose (arquivo);
}
void method08 () {
  // identificar
  IO_id ("\nEXEMPLO0716 - Method06 - v0.0");
  // executar o metodo auxiliar
  fibonacci ("RESULTADO08.TXT", 10);
    // encerrar
  IO_pause ("Apertar ENTER para continuar\n");
}
//-------------------------------------------------------------------------------
int maiuscula(char palavra[]){

    int posicao = strlen (palavra);
    int controle = 0;
    int maiusculas = 0;
    char letra;

    for (controle = 0; controle < posicao; controle = controle + 1)
    {
        letra = palavra[controle];
        
        if( letra>='A' && letra<='Z' )
        {
            maiusculas = maiusculas + 1;
        }
    
    }
    
    return (maiusculas);
}
void method09(){
    FILE* arquivo = fopen ("RESULTADO09.TXT", "wt");

   char palavra[80];
   int teste = 0;
   int y = 0;
   int maiusculas = 0;

   printf("\nDigite uma quantidade: ");
   scanf("%d", &teste);

   for (y=0; y<teste; y=y+1)
   {

       printf("\nDigite uma palavra: ");
       scanf("%s", palavra);

       int maiusculas = maiuscula(palavra);

       fprintf(arquivo,"\nPalavra = %s\n", palavra);
       fprintf(arquivo,"\nMaiusculas = %d\n", maiusculas);

       printf("\nOs valores foram gravados no arquivo.\n");
   
   } 

   fclose(arquivo);

}
//-------------------------------------------------------------------------------
int digito(char palavra[]){

    int posicao = strlen (palavra);
    int controle = 0;
    int contador = 0;
    char letra;

    for (controle = 0; controle < posicao; controle = controle + 1)
    {
        letra = palavra[controle];
        
        if( letra>='7' && letra<='9' )
        {
            contador = contador + 1;
        }
    
    }
    
    return (contador);
}
void method10(){
    FILE* arquivo = fopen ("RESULTADO10.TXT", "wt");

   char palavra[80];
   int teste = 0;
   int y = 0;
   int contador = 0;

   printf("\nDigite uma quantidade: ");
   scanf("%d", &teste);

   for (y=0; y<teste; y=y+1)
   {

       printf("\nDigite uma palavra: ");
       scanf("%s", palavra);

       int contador = digito(palavra);

       fprintf(arquivo,"\nPalavra = %s\n", palavra);
       fprintf(arquivo,"\nDigitos maiores ou iguais a 7 = %d\n", contador);

       printf("\nOs valores foram gravados no arquivo.\n");
   
   } 

   fclose(arquivo);

}
//-------------------------------------------------------------------------------

int main ()
{
  // definir dado
  int x = 0; // definir variavel com valor inicial
  
  // repetir até desejar parar
  do
  {
    // identificar
    IO_id ("EXEMPLO0716 - Programa - v0.0");
     
    // ler do teclado
    IO_println ("Opcoes");
    IO_println (" 0 - Parar");
    IO_println (" 1 - Quantidade em múltiplos de 5");
    IO_println (" 2 - Quantidade em múltiplos de 7");
    IO_println (" 3 - Quantidade em valores da sequência");
    IO_println (" 4 - Quantidade em valores decrescentes da sequência");
    IO_println (" 5 - Valores reais da sequência (math)");
    IO_println (" 6 - Representar certa quantidade de valores");
    IO_println (" 7 - Calcular a soma dos inversos das potências");
    IO_println (" 8 - Valor correspondente aos primeiros termos pares da série de Fibonacci");
    IO_println (" 9 - Calcular a quantidade de maiúsculas em cadeia de caracteres de um arquivo texto");
    IO_println (" 10 - Contar dígitos maiores ou iguais a 7 em uma cadeia de caracteres");
    IO_println ("");
    x = IO_readint ("Entrar com uma opcao: ");
      
    // testar valor
    switch (x)
    {
      case 0:
      method00 ();
      break;
      case 1:
      method01 ();
      break;
      case 2:
      method02 ();
      break;
      case 3 :
      method03 ();
      break;
      case 4:
      method04 ();
      break;
      case 5:
      method05 ();
      break;
      case 6:
      method06 ();
      break;
      method06 ();
      break;
      method07 ();
      break;
      method08 ();
      break;
      method09 ();
      break;
      method10 ();
      default:
      IO_println ("ERRO: Valor invalido.");
    } // fim escolher
  }
  while (x != 0);
  
  // encerrar
  IO_pause ("Apertar ENTER para terminar");
  
  return (0);
} // fim main ()