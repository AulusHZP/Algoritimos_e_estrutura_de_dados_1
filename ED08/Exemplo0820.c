/*
Exemplo0801 - v0.0. - 22/ 10 / 2022
Author: Áulus Batista
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Exemplo0820 ./Exemplo0820.c
No Windows: g++ -o Exemplo0820.exe Exemplo0820.c
Para executar em uma janela de comandos (terminal):
No Linux : ./Exemplo0820
No Windows: Exemplo0820
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
void ordem(int x){
    FILE* arquivo = fopen("DADOS.txt", "rt");
int y = 0;
int z = 0;
int controle = 0;
int contador = 0; 
    fscanf ( arquivo, "%d", &y );
    int arranjo[y];
        for(controle = 0; controle<y; controle = controle +1)
        {
            fscanf ( arquivo, "%d", &z );
            arranjo[controle] = z;    
        }
    controle = 0;
        while (controle<y)
        {
            if (arranjo[controle]==x)
            {
                contador = contador + 1;
            }
            controle = controle + 1;
        }
    if (contador>0)
    {
        printf("\nO valor se encontra %d vezes no programa.", contador);
    }
    else
    {
        printf("\nO valor NAO esta no arquivo.");
    }
}
//----------------------------------------------------------------
void Exemplo0820(){
    int x = 0;
        printf("\nEntre com um valor a ser procurado: ");
        scanf("%d", &x);
            ordem(x);
                getchar();
}
//----------------------------------------------------------------
int main(){
    int x = 0; 
    do
    {         
        IO_println ("Opcoes");
        IO_println (" 0 - parar");
        IO_println (" 1 - Exemplo0820");
        IO_println ("");
        x = IO_readint ("Entrar com uma opcao: ");
    switch (x)
    {
      case 0:
      method00 ();
      break;
      case 1:
      Exemplo0820 ();
      break;
      default:
      IO_println ("ERRO: Valor invalido.");
    }
    }while (x != 0);
    IO_pause ("Apertar ENTER para terminar");
return 0;
}
