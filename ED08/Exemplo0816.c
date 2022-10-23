/*
Exemplo0801 - v0.0. - 22/ 10 / 2022
Author: Áulus Batista
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Exemplo0816 ./Exemplo0816.c
No Windows: g++ -o Exemplo0816.exe Exemplo0816.c
Para executar em uma janela de comandos (terminal):
No Linux : ./Exemplo0816
No Windows: Exemplo0816
*/
// dependencias
#include "io.h" // para definicoes proprias
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void method00(){
}
//----------------------------------------------------------------
void task(char filename[])
{
FILE*arquivo = fopen(filename, "rt");
FILE*arquivo2 = fopen("ACIMA_MEDIA.txt", "wt");
FILE*arquivo3 = fopen("ABAIXO_MEDIA.txt", "wt");
int y = 0;
int z = 0;
    fscanf ( arquivo, "%d", &y );
int arranjo[y];
int controle = 0;
double  total = 0.0;
double  media = 0.0;

    for(controle = 0; controle<y; controle = controle +1)
    {
    fscanf ( arquivo, "%d", &z );
        arranjo[controle] = z;
        total = total + z;     
    }
        media = (total + 1.0) / (y + 1.0);
 printf("\n");
 printf("\nVALOR MEDIA = %lf", media);
 printf("\n");
 printf("\nValores acima ou iguais a media = \n");

    for(controle = 0; controle<y; controle = controle +1)
    {
        if (arranjo[controle]>=media)
        {
            printf("\n%d", arranjo[controle]);
            fprintf(arquivo2,"\n%d", arranjo[controle]);
        } 
    }
printf("\n");
printf("\nValores abaixo da media = \n");
    for(controle = 0; controle<y; controle = controle +1)
    {
        if (arranjo[controle]<media)
        {
            printf("\n%d", arranjo[controle]);
            fprintf(arquivo3,"\n%d", arranjo[controle]);
        } 
    }
 printf("\n");
 printf("\nOs valores foram gravados em seus arquivos");
 fclose(arquivo);
 fclose(arquivo2);
 fclose(arquivo3);
}
//----------------------------------------------------------------
void Exemplo0816()
{
    char filename[80];
        printf("\nEntre com o nome do arquivo que quer ler:");
        scanf("%s", filename);
            task(filename);
                getchar();
}
//----------------------------------------------------------------
int main(){
    int x = 0; 
  do
  {         
        IO_println ("Opcoes");
        IO_println (" 0 - parar");
        IO_println (" 1 - Exemplo0816");
        IO_println ("");
        x = IO_readint ("Entrar com uma opcao: ");
    switch (x)
    {
      case 0:
      method00 ();
      break;
      case 1:
      Exemplo0816 ();
      break;
      default:
      IO_println ("ERRO: Valor invalido.");
    } // fim escolher
  }while (x != 0);
        IO_pause ("Apertar ENTER para terminar");
return 0;