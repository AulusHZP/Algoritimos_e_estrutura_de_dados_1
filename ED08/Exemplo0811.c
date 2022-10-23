/*
Exemplo0801 - v0.0. - 22/ 10 / 2022
Author: Áulus Batista
Para compilar em uma janela de comandos (terminal):
No Linux : g++ -o Exemplo0811 ./Exemplo0811.c
No Windows: g++ -o Exemplo0811.exe Exemplo0811.c
Para executar em uma janela de comandos (terminal):
No Linux : ./Exemplo0811
No Windows: Exemplo0811
*/
// dependencias
#include "io.h" // para definicoes proprias
void method00(){
}
//----------------------------------------------------------------
bool PositivosImpares (int n, int array []){
  bool positivoImpar = false;
    if ((array [n] %2 != 0) && (array [n] >= 0))
    {
        positivoImpar = true;
    }
return positivoImpar;
}
//----------------------------------------------------------------
void LerArranjoInt (int n, int array []){
  int x = 0;
  int y = 0;
  chars text = IO_new_chars ( STR_SIZE );
    for (x = 0; x < n; x++)
    {
        strcpy (text, STR_EMPTY);
        y = IO_readint (IO_concat (IO_concat (text, IO_toString_d (x)), " : "));
        array [x] = y;
    } 
}
//----------------------------------------------------------------
void escreverArranjoInteiro (int n, int array []){
  int x = 0;
    for (x = 0; x < n; x = x + 1)
        {
            IO_printf ("%2d: %d\n", x, array [x]);
        } 
}
//----------------------------------------------------------------
void Exemplo0811 (){
  int n;
  int array [n];
    if (n <= 0)
        {
            IO_printf ("\nErro");
        }
        else 
            {
                IO_printf ("\n");
                lerArranjoInteiro(n, array);
                IO_printf ("\n");
                escreverArranjoInteiro(n, array);
                IO_printf ("\n");
            }
} 

int main(){
    int x = 0; 
    
  do
  {         
        // ler do teclado
        IO_println ("Opcoes");
        IO_println (" 0 - parar");
        IO_println (" 1 - Exemplo0811");
        IO_println ("");
        x = IO_readint ("Entrar com uma opcao: ");
    switch (x)
    {
      case 0:
      method00 ();
      break;
      case 1:
      Exemplo0811 ();
      break;
      default:
      IO_println ("ERRO: Valor invalido.");
    } // fim escolher
  }while (x != 0);
        IO_pause ("Apertar ENTER para terminar");
return 0;
}