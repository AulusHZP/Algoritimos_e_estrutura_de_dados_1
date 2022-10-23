/*
Exemplo0801 - v0.0. - 22/ 10 / 2022
Author: Áulus Batista
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Exemplo0817 ./Exemplo0817.c
No Windows: g++ -o Exemplo0817.exe Exemplo0817.c
Para executar em uma janela de comandos (terminal):
No Linux : ./Exemplo0817
No Windows: Exemplo0817
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
void ordem(int x, int arranjo[])
{
int controle = 0;
bool verifica = true; 
    while (controle<x-1 && verifica==true)
    {
        if (arranjo[controle]>arranjo[controle+1])
        {
            verifica = true;
        }
            else
                {
                    verifica = false;
                }
                controle = controle + 1;
    }
    if (verifica==true){
        printf("\nOs valores estao em ordem DECRESCENTE");
    }
        else{
            printf("\nOs valores NAO estao em ordem");
        }
        
}
//----------------------------------------------------------------
void Exemplo0817(){
    int x = 0;
    int z = 0;
    int controle = 0;

        printf("\nEntre com um tamanho para o arranjo:");
        scanf("%d", &x);
        int arranjo[x];
            for (controle = 0; controle <x; controle = controle + 1)
            {
                printf("\nEntre com um valor para [%d]:", controle);
                scanf("%d", &z);
                arranjo[controle] = z;
            }
    ordem(x,arranjo);
    getchar();
}
//----------------------------------------------------------------
int main(){
    int x = 0; 
    do
    {         
        IO_println ("Opcoes");
        IO_println (" 0 - parar");
        IO_println (" 1 - Exemplo0817");
        IO_println ("");
        x = IO_readint ("Entrar com uma opcao: ");
    switch (x)
    {
      case 0:
      method00 ();
      break;
      case 1:
      Exemplo0817 ();
      break;
      default:
      IO_println ("ERRO: Valor invalido.");
    } 
  }while (x != 0);
        IO_pause ("Apertar ENTER para terminar");
return 0;