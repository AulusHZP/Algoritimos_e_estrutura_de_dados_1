/*
Exemplo0801 - v0.0. - 22/ 10 / 2022
Author: Áulus Batista
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Exemplo0814 ./Exemplo0814.c
No Windows: g++ -o Exemplo0814.exe Exemplo0814.c
Para executar em uma janela de comandos (terminal):
No Linux : ./Exemplo0814
No Windows: Exemplo0814
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
int y = 0;
int z = 0;
    fscanf ( arquivo, "%d", &y );
int arranjo[y];
int controle = 0;
int menor = 0;

    for(controle = 0; controle<y; controle = controle +1)
    {
        fscanf ( arquivo, "%d", &z );
        arranjo[controle] = z;
        printf("\n%d", arranjo[controle]);
        menor = z;
    }

    for(controle = 0; controle<y; controle = controle +1)
    {
     if (arranjo[controle]<menor)
     {
        menor = arranjo[controle];
     } 
    }

    printf("\n");
    printf("\nMENOR VALOR = %d", menor);
    fclose(arquivo);
}
//----------------------------------------------------------------
void Exemplo0814(){
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
        // ler do teclado
        IO_println ("Opcoes");
        IO_println (" 0 - parar");
        IO_println (" 1 - Exemplo0814");
        IO_println ("");
        x = IO_readint ("Entrar com uma opcao: ");
    switch (x)
    {
      case 0:
      method00 ();
      break;
      case 1:
      Exemplo0814 ();
      break;
      default:
      IO_println ("ERRO: Valor invalido.");
    } // fim escolher
  }while (x != 0);
        IO_pause ("Apertar ENTER para terminar");
return 0;