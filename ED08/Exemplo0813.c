/*
Exemplo0801 - v0.0. - 22/ 10 / 2022
Author: Áulus Batista
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Exemplo0813 ./Exemplo0813.c
No Windows: g++ -o Exemplo0813.exe Exemplo0813.c
Para executar em uma janela de comandos (terminal):
No Linux : ./Exemplo0813
No Windows: Exemplo0813
*/
// dependencias
#include "io.h" // para definicoes proprias
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void method00(){
}
//---------------------------------------------------------------- 
void task(int cima, int baixo, int testes){

 int controle = 0;
 int y = 0;
 int arranjo[testes];
    srand(time(NULL));
        for ( controle = 0; controle < testes; controle = controle + 1)
        {
            y = baixo + rand() %cima;
            if(y>cima)
            {
                y = baixo + rand() %cima -1; 
            }
            arranjo[controle] = y;
            printf("\n%d", y);
        }
    FILE* arquivo = fopen("DADOS.txt", "wt");
    fprintf(arquivo,"\n%d\n", testes);
        for (controle = 0; controle<testes; controle = controle + 1)
        {
            fprintf(arquivo,"\n%d", arranjo[controle]);
        }
}
//---------------------------------------------------------------- 
void Exemplo0813(){
    int cima = 0;
    int baixo = 0;
    int testes = 0;
        printf("\nEntre com o limite inferior:");
        scanf("%d", &baixo);
            printf("\nEntre com o limite superior:");
            scanf("%d", &cima);
                printf("\nEntre com a quantidade de testes:");
                scanf("%d", &testes);
                    task(cima, baixo, testes);
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
        IO_println (" 1 - Exemplo0813");
        IO_println ("");
        x = IO_readint ("Entrar com uma opcao: ");
    switch (x)
    {
      case 0:
      method00 ();
      break;
      case 1:
      Exemplo0813 ();
      break;
      default:
      IO_println ("ERRO: Valor invalido.");
    } // fim escolher
  }while (x != 0);
        IO_pause ("Apertar ENTER para terminar");
return 0;