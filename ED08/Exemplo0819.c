/*
Exemplo0801 - v0.0. - 22/ 10 / 2022
Author: Áulus Batista
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Exemplo0819 ./Exemplo0819.c
No Windows: g++ -o Exemplo0819.exe Exemplo0819.c
Para executar em uma janela de comandos (terminal):
No Linux : ./Exemplo0819
No Windows: Exemplo0819
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
void ordem(int x)
{
FILE* arquivo = fopen("DADOS.txt", "rt");
// definir dado local
int y = 0;
int z = 0;
int controle = 0;
bool verifica = false; 
    fscanf ( arquivo, "%d", &y );
    int arranjo[y];
        for(controle = 0; controle<y; controle = controle +1)
        {
            // ler valor
            fscanf ( arquivo, "%d", &z );

            arranjo[controle] = z;    
        
        }
    controle = 0;
        while (controle<y && verifica==false)
        {
            if (arranjo[controle]==x)
            {
                verifica = true;
            }

            controle = controle + 1;
        }
        if (verifica==true)
        {
            printf("\nO valor ESTA no arquivo na posicao %d.", controle);
        }
        else
        {
            printf("\nO valor NAO esta no arquivo.");
        }
}
//----------------------------------------------------------------
void Exemplo0819()
{
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
        IO_println (" 1 - Exemplo0819");
        IO_println ("");
        x = IO_readint ("Entrar com uma opcao: ");
    switch (x)
    {
      case 0:
      method00 ();
      break;
      case 1:
      Exemplo0819 ();
      break;
      default:
      IO_println ("ERRO: Valor invalido.");
    }
    }while (x != 0);
    IO_pause ("Apertar ENTER para terminar");
return 0;
}